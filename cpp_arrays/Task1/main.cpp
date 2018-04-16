#include <iostream>
#include <fstream>

using namespace std;

int countChars(string buffer, char x){
    int count = 0;
    for(int i = 0; i < buffer.length(); i++)
        if(buffer[i] == x)
            count++;
    return count;
}

int *parse(string buffer){
   int arrSize = countChars(buffer, ',') + 1;
   // The array size is equals to the number of commas + 1
   int *arr = new int[arrSize]; // Allocate a new array instance.
   for(int i = 0; i < arrSize; i++){
        // We need to parse {arrSize} strings into ints.
        string word = "";
        
   }

   return arr;
}

int main(){
   ifstream inFile;
   inFile.open("test.txt");
   string A, B;
   inFile >> A >> B;

   int *arrA = parse(A);
   int *arrB = parse(B);
}


