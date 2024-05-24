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
    mAge = 45.756;
}

Person::~Person() {
    //empty
}

float Person::operator + (const Person& otherPerson) {
    
    return this->mWeight + otherPerson.mWeight;
}

Person::operator string() {
    string Jane = mFirstName;
    return Jane;
}

Person::operator float() {
    float Jane = mWeight;
    return Jane;
}