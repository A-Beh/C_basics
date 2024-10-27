//  main.cpp
//  [9] Loops
//  Created by Ali Behfarnia on 09/01/24.

#include <iostream>
using namespace std;

int main() {
    
    // Step one: General
    for (int i = 10; i >= 0; i -=5 ){
        cout << i << endl;
    }
    cout << '\n';

    for (int k=1; k <= 15; k +=3){
        cout<< "k is: " << k <<endl;
    }
    
    cout << '\n';
    
    for (int i=0; i<=8; i+= 2){
        cout<< "i is: " << i <<endl;
    }
    
    cout << '\n';
    
    // Step two: Nested Loops
    int rows, columns;
    cout << "Enter # of rows: ";
    cin >> rows;
    cout << "Enter # of columns: ";
    cin >> columns;
    cout << '\n';
    
    for (int i = 1; i<= rows; i++){
        for (int j = 1; j <= columns; j ++){
            cout << "$" << ' ';
        }
        cout << '\n';
    }
    
    cout << '\n';
    
    // Step three: Continue and breaks
    // Break: break out of a loop
    // Continue: skip current iteration
    
    for (int i= 1; i<= 5; i++){
        
        if (i==3){
            continue;
        }
        cout << i << endl;
        
    }
    
    cout << '\n';
    
    string name;
    
    cin.get(); // to Handle Single-Character Input
    
    while(name.empty()){
        cout << "Enter your name: ";
        // cin >> name;
        getline(cin, name);
    }
    
    cout<< "Hello " << name <<endl;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    return 0;
}
