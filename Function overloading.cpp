/*Function overloading*/

#include <iostream>
using namespace std;

void printNumber(int a) { 
  cout << "Integer " << a << endl;
}

void printNumber(char ch) { 
  cout << "Character " << ch << endl;
}

int main() {
    
    printNumber(190);
    printNumber('p');

    return 0;

}