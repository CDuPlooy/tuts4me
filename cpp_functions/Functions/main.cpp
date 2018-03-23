#include <iostream>
#include "example.h" 
/* Notice how we use "" instead of <>
 * "" refers to the current working directory
 * <> refers to the $PATH environmental variable.

 * Including example.h means we have access to the power
 * function that we wrote in example.cpp
*/

using namespace std;

/* Because example.h is imported we can try to call the function.
 * However if the header file does not include the implementation file
 * ( THIS IS NOT GOOD PRACTISE ) then we need to compile all our source
 * files ( this is good practise ).
 *
 * A neat trick for COS modules in general is that
 *      g++ *.cpp
 * Will compile all your cpp classes in the current directory. Sometimes this may
 * not work depending on what they did.
 */
int main(){
    cout << "2 raised to the power of 3 is: " << power(2, 3) << endl;
}
