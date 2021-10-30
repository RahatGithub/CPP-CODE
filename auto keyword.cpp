/*By using 'auto' keyword, we can store values of any 
data type but we need to assign it when we are declaring it. 
We can't just declare a variable with 'auto' keyword 
and then assign the value after. */

#include<iostream>
using namespace std;

int main()
{
    auto a = 4; //integer
    auto b = 3.37; //float
    auto c = "hello"; //string 

    cout << a << endl << b << endl << c;

}