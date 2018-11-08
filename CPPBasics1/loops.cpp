#include <iostream>
using namespace std;

int main() {
    /* 
        Use a loop, accept 10 integers and do:
            Count and print out how many of the entered numbers are positive.
            Count and print out how many of the entered numbers are negative.
            Count and print out how many of the entered numbers are zeroes.
            Calculate and print the sum of all the numbers entered.
            Calculate and print the average value of all the numbers entered.
    */
    
    int number_Of_Positive=0, number_Of_Negative=0, areZero=0, userInput=0, sum=0, avg = 0;

    cout << "Enter 10 integers" << endl;

    for(int i = 0; i < 10; i ++) {
        cin >> userInput; 
        sum += userInput;
    
        if (userInput == 0)
           areZero++;
        if ( userInput >= 0)   //is even
            number_Of_Positive++;
        else                        //is odd
            number_Of_Negative++;
    }
    
    avg = sum / 10;
    
    cout << "The sum is " << sum << endl;
    cout << "the average is " << avg << endl;
    cout << "Positive " << number_Of_Positive << "   Negative " << number_Of_Negative << endl;
    cout << "Zero " << areZero << endl;
}