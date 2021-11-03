#include <iostream>
using namespace std;


int main() 
{
    float age, lowest_age = 1000;

    for(int i=0; i<5; i++)
    {
        cin >> age;

        if(age < lowest_age)
        {
            lowest_age = age;
        }
    }

    float discount, total_cost;

    discount = 50 * (lowest_age/100);

    total_cost = 50 - discount;

    cout << total_cost;
}