/*Finding the sum of 1 to n using recursion*/

#include <iostream>
using namespace std;


int sum(int x){

  if(x!=0){
    return x + sum(x-1);
  }

}


int main() {

  int num;

  cout << "Enter a nubmer: ";
  cin >> num;

  cout << sum(num);

  return 0;

}
