#ifndef person_h
#define person_h
#include <string>

using namespace std;

class Person
{
    protected:
        string name;
        int age;
    public:
        Person();
        Person(string name);
        string getName();
        int getAge();
        void setAge(int age);
};
#endif
