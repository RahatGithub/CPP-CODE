/*Finding the factorial of a number using recursion*/

#include <iostream>
using namespace std;

int fact(int n) { 
  if(n==1)
  {
    return 1;
  }
  else
  {
    return n*fact(n-1);
  }
}


int main() {
  
  int n;
  cout << "Enter a number(n): ";
  cin >> n;
  cout << "Factorial of " << n <<" = " << fact(5);

}