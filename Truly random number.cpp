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
    /*srand() needs a seed as it's parameter. everytime
    the seed is changed, it will generate new random number.
    Otherwise it will generate a random number once and keep
    showing it repeatedly.*/
    
    cout << (rand() % 10);  
    /*This will generate a number within the range 0-9.*/

    return 0;

}