/*Creating a class and its object. Then using the method of that class on that object.*/

#include <iostream>
using namespace std;

class Student {

  public:

    void welcome(string name){
      cout << "Hello, " << name << ", Welcome to SEC" << endl;
    }

};

int main() {

  Student st1;

  st1.welcome("Rahat");
  
}