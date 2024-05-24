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

        // conversion operators
        operator string();
        operator float();
        
    private:
        float mWeight;
        string mFirstName; 
        double  mAge;
};