#include <iostream>
#include <string>
#include "person.h"
#include "student.h"

using namespace std;

int main(int argc, char* args[]){
    Person* p = new Person("Zhenyu");
    p->setAge(25);
    cout << "Hello " << p->getName() << ". You are " << p->getAge() << endl;

    Person* p1 = new Student("Haolin", 8, 2);
    cout << "Hello " << p1->getName() << ". You are " << p1->getAge() << endl;

    Student* s1 = new Student("Haolin", 8, 2);
    cout << "Hello " << s1->getName() << ". You are in grade: " << s1->getGrade() << endl; 

    delete p;
    delete p1;
    delete s1;
    // cout << "Hello world" << endl;
    return 0;
}