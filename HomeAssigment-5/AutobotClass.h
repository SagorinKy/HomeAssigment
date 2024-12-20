/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#ifndef AUTOBOT_CLASS
#define AUTOBOT_CLASS
#include "TransformerClass.h"

class Autobot: public Transformer
{
    friend std::ostream& operator<< (std::ostream& os, const Autobot& A);
private:
    std::string colour;
    int socialRating;
public:
    Autobot();
    Autobot(int socialRating, std::string colour, Transformer& t);
    int getRating();
    void setRating(int rating);

    std::string getColour();
    void setColour(std::string colour);

    bool sleep();
    bool operator<=(const Autobot& A);
    ~Autobot();
};

#endif
