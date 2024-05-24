#pragma once

#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}
// assign the values of the member variable
Person::Person(string newName, float newWeight) {
    mFirstName = newName;
    mWeight = newWeight;
    mAge = 0;
}

Person::~Person() {
    //empty destructor
}

// adding the weight of two objects
float Person::operator + (const Person& otherPerson) {
    
    return this->mWeight + otherPerson.mWeight;
}