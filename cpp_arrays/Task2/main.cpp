#include <iostream>

using namespace std;
int getMax(int arr[3][3]);

int main(){
    int arr[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            arr[i][j] = i + j;
        }
    // Initialise a 3x3 array and assign elements to it.
    // Notice the structure of the loop as it is very important.
    // When dealing with data structures of any kind you should always
    // know how to traverse the entire data structure.

    cout << "The max is: " << getMax(arr) << endl;
}

/*
 * This is a function;
 * 
 * Functions make it easier to break code up into smaller bits.
 * This makes it much easier for you to reason about your own code
 * and to keep track of what is going on. You should always start by
 * decomposing your problem into a set of functions.
 */
int getMax(int arr[3][3]){
    int max = arr[0][0];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(arr[i][j] > max)
                max = arr[i][j];
    return max;
}
