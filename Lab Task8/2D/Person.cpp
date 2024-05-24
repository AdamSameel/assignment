#pragma once

#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string newName, float newWeight) {
    mFirstName = newName;
    mWeight = newWeight;
    mAge = 0;
}

Person::~Person() {
    //empty
}

float Person::operator + (const Person& otherPerson) {
    
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator == (const Person& otherPerson) const {
    
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator != (const Person& otherPerson) const {
    
    return this->mFirstName != otherPerson.mFirstName;
}