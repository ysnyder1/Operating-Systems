#include <iostream>
#include <cmath>
using namespace std;

 struct Point {
        float x;
        float y;
    } p1, p2;

float calculateDistance(Point p1, Point p2) {
    
    return sqrt( pow((p2.x-p1.x),2)+ pow((p2.y-p1.y),2) );
}

int main() {
    
   
    
    std::cout<< "Enter x,y coordinates of two points" << std::endl;
    cin>> p1.x >> p1.y >> p2.x >> p2.y;
    
    cout<< calculateDistance(p1,p2) << " distance" << endl;
}

