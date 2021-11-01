/*Printing an array using pointer*/

#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {5, 10, 15, 20, 25};

    //This will print the array 'arr':
    for(int i=0; i<5; i++)
    {
        cout << *(arr+i) << endl; //*(arr+i) points the element in ith index of arr 
    }

    return 0;
}