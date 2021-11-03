/*Dynamic memory*/

#include <iostream>
using namespace std;


int main() 
{
    int *a = NULL;

    a = new int[10]; //dynamically created an array

    for(int i=0; i<10; i++)
    {
        a[i] = i+1;
    }

    for(int i=0; i<10; i++)
    {
        cout << a[i] << endl;
    }

    delete a; //'delete' operator simply deallocates the variable 'a'

    return 0;
}