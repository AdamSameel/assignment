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
        
        //overload equality operators
        bool operator == (const  Person& otherPerson) const;

        bool operator != (const  Person& otherPerson) const;
    private:
        float mWeight;
        string mFirstName; 
        int  mAge;
};