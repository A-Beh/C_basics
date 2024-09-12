//
//  main.cpp
//  [15] pass by value_ref
//
//  Created by Ali Behfarnia on 09/11/24.
//

#include <iostream>

using namespace std;

void swap (string &x, string &y);

int main() {
    
    
    // If we don't use & in the function, we pass by the value
    // If we use & in the function, we pass by the reference
    // We should use pass by reference as often as possible
    
    string name = "Ali";
    int age = 21;
    bool stud = true;
    
    cout << name << endl;
    cout << &name << endl;
    cout << &stud << endl;
    cout << &age << endl;
    
    string x = "Gishaa";
    string y = "Saadat";
    string temp;
    
//    temp = x;
//    x = y ;
//    y =  temp;
    
    swap (x, y);
    
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
        
    return 0;
}


void swap(string &x, string &y){
    string temp;
    
    temp = x;
    x = y ;
    y =  temp;
    
}
