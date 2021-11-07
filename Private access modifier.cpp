/*Creating a class and its object. Then using the method of that class on that object.*/

#include <iostream>
using namespace std;

class Student {

  public: //can be accessed from outside the class

    void greet(){
      cout << "Hello there! What's up?" << endl;
    }

  private: //can not be accessed from outside the class

    void bye(){
      cout << "Good bye. Have a good day." << endl;
    }

};

int main() {

  Student st1;

  st1.greet();

  //st1.bye();  ***This won't work as bye() is defined with private access modifier
  
}