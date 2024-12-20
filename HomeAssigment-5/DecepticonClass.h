/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#ifndef DECEPTICON_CLASS
#define DECEPTICON_CLASS
#include "TransformerClass.h"

class Decepticon: public Transformer
{
    friend std::ostream& operator<< (std::ostream& os, const Decepticon& D);
private:
    std::string regiment;
    int rank;
public:
    Decepticon();
    Decepticon(int rank, std::string regiment, Transformer& t);
    int getRank() const;
    void setRank(int rank);

    std::string getRegiment() const;
    void setRegiment(std::string regiment);

    bool isOnWar();
    bool operator<=(const Decepticon& D);
    
    void transform() const override;
    void openFire() const override;
    void ultimate() const override;

    ~Decepticon();
};

#endif
