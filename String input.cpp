/*Taking input of a string using getline()*/

#include <iostream>
#include <string>
using namespace std;


int main() {

  string name;

  cout << "Enter your name ";

  getline(cin, name); //This takes a whole string

  cout << "Hello " << name << endl;
  
}