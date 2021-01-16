#ifndef student_h
#define student_h
#include <string>
#include "person.h"

using namespace std;

class Student : public Person
{
    private:
        int grade;
    public:
        Student(string name, int age, int grade);
        int getGrade();
        void setGrade(int grade);
};

#endif