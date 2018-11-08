#include <iostream>
using namespace std;

int main () {
    int num;
    int myArray[10];
    
    //ask user for 10 integers
    cout << "Enter 10 integers to be printed in reverse order" << endl;
    
    //accept input
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        myArray[i] = num;
    }
    
    cout << endl << endl;
    
    //print array in reverse
    
    for (int i = 9; i >= 0 ; i--)
    {
        cout << myArray[i] << endl;
    }
    
    cout << endl << endl;
    
    //sort the array lowest to highest
    for(int first = 1; first < 10; first++)
    {
        for(int compare = 0; compare < 9; compare++)
        {
            if (myArray[compare] > myArray[compare+1])
            {
              
                int swap = 0;
                swap = myArray[compare];
                myArray[compare] = myArray[compare+1];
                myArray[compare+1] = swap;
                
            }
        }
    }
    
    //print sorted array3

    
    for (int i = 0; i < 10; i++)
    {
        cout << myArray[i] << endl;
    }
}