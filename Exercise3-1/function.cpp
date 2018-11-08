#include <iostream>
using namespace std;

 void swapInts (int* a, int* b)
    {
         int x = *a;  //x = value at memory locaiton a
        *a = *b;
        *b = x; 
        cout << *a << " " << *b << endl;
    }

int main() {
    int num1;
    int num2;
    
    cout << "Enter two integers" << endl;
    cin >> num1 >> num2;
    
    cout << "Swapping the two integers:  ";
    
     swapInts( &num1, &num2);
     
}