/*Pass by value VS Pass by reference:


***Passing only the value does not change the passed variable, in fact it creates a new 
local variable inside the function and changes that local variable and thus returns 
the new value only. 


***By passing the memory address of a variable we can point the actual variable and change it.*/

#include <iostream>
using namespace std;

void false_swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void actual_swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() 
{
    //FALSE SWAPPING (pass by value)
    int a = 10, b = 33;

    false_swap(a, b); //Passing the values of the variables but not the variables themselves

    cout << "False swapping (pass by value): " << a << " " << b << endl;



    //ACTUAL SWAPPING (pass by reference)
    int *aPtr = &a, *bPtr = &b;

    actual_swap(aPtr, bPtr); //Passing the memory address of the variables

    cout << "Actual swapping (pass by reference) " << a << " " << b << endl;



    return 0;
}