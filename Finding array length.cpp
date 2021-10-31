/*How to find the length of 1D/2D array*/

#include <iostream>
using namespace std;

int main() {
    
    int arr[2][3] = {
        {2, 3, 4}, 
        {8, 9, 10} 
    };

    int num_of_row = sizeof(arr)/sizeof(arr[0]);       //Dividing the size of the whole array by the size of the first row. This will give total number of rows.
    int num_of_col = sizeof(arr[0])/sizeof(arr[0][0]); //Dividing the size of the first row by the first element of that row. This will give number of columns/elements in that first row. 

    cout << "row: " << num_of_row << " col: " << num_of_col;
    
    return 0;
}