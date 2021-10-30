/*Prefix and Postfix increment 
[Also applies for decrement]*/


#include<iostream>
using namespace std;

int main()
{
    //Prefix:

    int x, y;
    x = 0;
    y = ++x;  //First increments the value of x (now x=1), then assigns it to y (now y=1)
    cout << x << " " << y << endl; //It will print '1 1'

    //Postfix:
    
    int a, b;
    a = 0;
    b = a++;  //First assigns the value of a to b (now b=0), then increments the value of a (now a=1)
    cout << a << " " << b << endl;  //It will print '1 0'
}