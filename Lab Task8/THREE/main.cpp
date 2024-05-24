#include <iostream>
#include "Person.h"

using namespace std;

int  main()	{
    Person Jane	=  Person("Jane",	60.0f);
    Person John	= Person("John",	75.0f);

    float totalWeight	=  Jane	+  John;

    cout << "Total weight: " << totalWeight << endl;

    int JohnAge = John;
    cout << "\nJohn's Age: " << JohnAge << endl;

    return 0;
}
