#include <iostream>
using namespace std;

int main() {
   //1. a
    int myInt = 15;
    int *myPointer = &myInt;
    
    //1.b
    cout << "Memory Location " << &myInt << " Value " << myPointer << endl;
    cout << "Value " << myInt << " Value pointed to " << *myPointer << endl;
    
    //1.c
    myInt = 10;
    cout << "Memory location " << &myInt << " Value " << myPointer << endl;
    cout << "Value " << myInt << " Value pointed to " << *myPointer << endl;
    
    
}