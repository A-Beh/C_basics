//  main.cpp
//  [4] Math
//  Created by Ali Behfarnia on 8/16/24.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Multi-Line Comment
    /*
     Here is the comments for the
     following work.
     */
    
    cout << "Enter radius: " ;
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "The Area is: " << area << endl;
    double Circ = 2 * pi * radius;
    cout << "The Circumference is: " << Circ << endl;
    
//    double result = pow(2, 3);
//    cout << result << endl;
    return 0;
}
