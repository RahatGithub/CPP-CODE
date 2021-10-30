/*Like other languages, C++ also have priorities 
to execute operations, using various operators. 
This is called 'Operator Precedence'.
The sequence is: 
 Division (/)
 Multiplication (*)
 Modulus (%)
 Subtraction (-)
 Addition (+) */


#include<iostream>
using namespace std;

int main()
{
    auto res = 4 / 2 * 3 + 2 - 1;
    //This will calculate as res = ((4 / 2) * 3) + (2 - 1)
    cout << res;

}