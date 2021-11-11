/*Printing the fibonacci series till n using recursion*/

#include <iostream>
using namespace std;


int fibo(int x){

  if(x<=1){
    return x;
  }
  else{
    return fibo(x-1) + fibo(x-2);
  }

}


int main() {

  int num;

  cout << "Enter a nubmer: ";
  cin >> num;

  for(int i=0; i<num; i++){
    cout << fibo(i) << " ";
  }

  return 0;

}
