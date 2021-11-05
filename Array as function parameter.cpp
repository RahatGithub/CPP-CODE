/*Passing array as a function parameter*/

#include <iostream>
using namespace std;

void PrintArr(int arr[], int size) { 
  
  for(int i=0; i<size; i++)
  {
    cout << arr[i] << " ";
  }

}


int main() {
  
  int arr[3] = {6, 8, 12};

  int size = sizeof(arr)/sizeof(int);

  PrintArr(arr, size);

}