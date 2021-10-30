#include<iostream>
using namespace std;

int main()
{

    int passengers, res;

    cin >> passengers;

    res = 50 - (passengers%50);

    cout << res;

}