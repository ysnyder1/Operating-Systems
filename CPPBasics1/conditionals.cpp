#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cout << "Enter your exam score" << endl;
    cin >> score;
    
    if ( 100 >= score && score >= 90) {
        cout << "A" << endl;
    } else if ( 90 > score && score >= 80) {
        cout << "B" << endl;
    } else if ( 80 > score && score >= 70 ) {
        cout << "C" << endl;
    } else if ( 70 > score && score >= 60 ) {
        cout << "D" << endl;
    } else  {
        cout << "F" << endl;
    }
        
}