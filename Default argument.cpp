/*Default argument of a function*/

#include <iostream>
using namespace std;

int sum(int a, int b=15, int c=20){
    return (a+b+c);
}


int main() {
    
    int res = sum(1000); //By default, b=15 and c=20

    cout << res; //res = 1035

    return 0;

}