#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
   ifstream inFile;
   inFile.open("test.txt");
   string A, B;
   inFile >> A >> B;
   int numbers[25];

   int count = 0;
   istringstream input(A); 
   while(getline(input, A, ',')){
        numbers[count++] = stoi(A);
   }

   input = istringstream(B);
   while(getline(input, B, ',')){
        numbers[count++] = stoi(B);
   }
   
   int split_at = count/2;
   int *arrA = numbers;
   int *arrB = numbers + split_at;
   
   int ans = 0;
   for(int i = 0; i < split_at; i++)
       ans += arrA[i] * arrB[i];

   cout << ans << endl;
}


