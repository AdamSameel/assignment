#include <iostream>
#include "Person.h"

using namespace std;

int  main()	{
    Person Jane	=  Person("Jane",	60.0f);
    Person John	= Person("John",	75.0f);

    float totalWeight	=  Jane	+  John;

    cout << "Total weight: " << totalWeight << endl;

    string JaneFirstName = Jane;
    cout << "\nJane's FirstName " << JaneFirstName << endl;
    
    float JaneWeight = Jane;
    cout << "\nJane's Weight " << JaneWeight << endl;
    return 0;
}