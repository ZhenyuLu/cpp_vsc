#include "student.h"

using namespace std;

Student::Student(string name, int age, int grade)
{
    this->name = name;
    this->age = age;
    this->grade = grade;
}

int Student::getGrade(){
    return this->grade;
}

void Student::setGrade(int grade) {
    this->grade = grade;
}