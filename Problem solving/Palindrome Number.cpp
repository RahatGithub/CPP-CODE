/*Checking if a number is palindrom*/

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    
    string str = to_string(x);
    int length = str.size();

    for(int i=0; i < length; i++){
      if(str[i] != str[length-i-1]){
        return false;  
      }
    }
    return true;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}