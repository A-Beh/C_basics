//  main.cpp
//  [3] C input
//  Created by Ali Behfarnia on 8/20/24.

#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter values for x and y: ";
    double x, y;
    cin >> x >> y;
    cout << x + y << endl;
        
    cout << "Fahrenheit: ";
    int fa;
    cin >> fa;
    double cel = (fa - 32)/1.8;
    cout << cel << endl;
    
    return 0;
}
