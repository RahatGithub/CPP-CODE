/*Using switch-case statements. 
Sometimes, switch-case is more efficient then nested if-else.
e.g. if there are some cases/values that are sure to be returned as
the output, then we can just find the case and execute an operation 
for that case. It doesn't need to check the cases one by one like 
if-else. Hence it is more efficient.*/


#include<iostream>
using namespace std;

int main()
{
    int age;

    cin >> age;
    
    switch(age)
    {
        case 14:
            cout << "You can watch videos on Youtube about driving.";
            break;
        
        case 16:
            cout << "You can join driving classes";
            break;
        
        case 18:
            cout << "You can drive a car now!";
            break;

        default: 
            cout << "You shouldn't think about driving a car now...";
    }
}