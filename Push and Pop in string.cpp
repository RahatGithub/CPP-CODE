/*Push and Pop in a string*/

#include <iostream>
#include <string>
using namespace std;


int main() {

  string name;

  cout << "Enter your name : ";

  getline(cin, name);

  cout << "Original : " << name << endl;

  name.push_back('X'); //Pushes a character to the last position of a string

  cout << "After push_back : " << name << endl;

  name.pop_back(); //Pops the last character of a string

  cout << "After pop_back : " << name << endl;

  
  
}