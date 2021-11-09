/*do-while loop*/

#include <iostream>
using namespace std;


int main() {

  int i=1, sum=0;

  do{ //This block executes first, then checks the while condition
    sum = sum + i;
    i++;
  }
  while(i<=10);  
  
  cout << "Sum is: " << sum << endl; 
  


}