#include "example.h"	// It is good practise to import the prototype
// Before creating the implementation.

int power( int base, int powerOf ){	// Implementation
    if(powerOf == 0)
        return 1;
    int ans = base;
    for(int i = 1; i < powerOf; i++)
        ans *= base;
    return ans;
}
