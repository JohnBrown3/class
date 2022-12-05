/*
Taylor Nilsen
0702201
15
4 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/

#include <iostream>

using namespace std;
void fillArray(int ar[], int size);
void printArray(const int ar[], int size);

int main(){
    int ar[25];
    
    fillArray(ar, 25);
    
    cout << printArray(ar, 25) << endl;
        
    return 0;
}
void fillArray (int ar[], int size) {
    for (int i=0; i< size; i++){
        ar[i] = rand() % 10 + 1;
    }
    
}
int searchArray(const int ar[], int rSize){
    int count = 0;
    for (int row = 0; row < rSize; row++){
        for (int col = 0; col < rSize; col++){
            if ((ar[25])% 2 == 0){
                count++;
            }
        }
    }
    return count;
}