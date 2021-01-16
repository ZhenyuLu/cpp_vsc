#include "person.h"

using namespace std;

Person::Person(){
    this->name = "unknown";
}

Person::Person(string theName){
    this->name = theName;
}

string Person::getName() {
    return this->name;
}

int Person::getAge(){
    return this->age;
}

void Person::setAge(int age){
    this->age = age;
}