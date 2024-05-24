#pragma once

#include 	<string>
using namespace  std;

class  Person {
    public:
        Person();
        Person(string newName, float  newWeight);

        ~Person();
        //Overload the add  operator
        float operator + (const  Person& otherPerson);

        // conversion operator to int
        operator int();
        
    private:
        float mWeight;
        string mFirstName; 
        double  mAge;
};