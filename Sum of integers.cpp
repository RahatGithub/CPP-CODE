//Purpose: Take two integers as input and print their sum


#include<iostream>
using namespace std;

int main()
{
    int a, b, sum;

    cout << "Enter two numbers: ";
    
    cin >> a >> b;

    sum = a + b;

    cout << "var1 = " << a << endl << "var2 = " << b << endl << "sum = " << sum;

    return 0;
}