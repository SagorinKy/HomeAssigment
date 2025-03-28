/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#ifndef ALLY_CLASS
#define ALLY_CLASS

#include <string>

class Ally
{
private:
    std::string name;
    int age;
public:
    Ally();
    Ally(std::string name, int age);
    int getAge();
    void setAge(int age);
    void addAge();
    std::string getName();
    void setName(std::string name);
    bool isFriend(std::string* names, int n);
    ~Ally();

};

#endif
