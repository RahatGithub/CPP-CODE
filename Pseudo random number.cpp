/*Generating pseudo random numbers:

This program generates random numbers but every time 
the program is run, it generates the same random numbers.
Hence these are called 'Pseudo random numbers'.*/

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    for(int i=0; i<10; i++)
    {
        cout << (rand() % 10) << endl; //rand() generates any random number, whereas (rand() % n) generates within the range 0-(n-1)
    }
    
}