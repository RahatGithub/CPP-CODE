/*Generating truly random numbers:

This program generates random numbers by 
different seed through srand() every time. Thus 
this will generate truly random numbers. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    srand(time(0));  
    
    cout << (rand() % 5);  
    

    return 0;

}