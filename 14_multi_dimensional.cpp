//
//  main.cpp
//  [14] Multi-dimensional Array
//
//  Created by Ali Behfarnia on 09/11/24.
//

#include <iostream>
using namespace std;


int main() {
    
    string cars[][3] = {{"Civic", "accord","CRV"},
        {"X3", "x6","220"},
        {"challenger","durango","ram 1500"}};
    
    
                    
//    cout << cars[2][2] << " ";
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);
    
    for (int i= 0; i< rows; i++){
        
        for (int j=0; j<cols; j++){
            cout << cars[i][j] << " ";
        }
        cout << "\n";
    }
    
    cout << '\n';
    return 0;
}
