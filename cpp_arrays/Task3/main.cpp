#include <iostream>

using namespace std;

bool findElement(int arr[3][3], int element);

int main(){
    int arr[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            arr[i][j] = i + j;

    cout << "Searching for 19 resulted in: " << (findElement(arr, 19) ? "true" : "false") << endl;
}

bool findElement(int arr[3][3], int element){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(arr[i][j] == element)
                return true;
    return false;
}
