//  main.cpp
//  [5] Data Types
//
//  Created by Ali Behfarnia on 8/20/24.


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*
     -- In C++, we have to specify the variable type.
     That's why we called C++ as statically-type languages.
     */
    
    /*
     -- In Python, the type of the data is determined based on
     the values of the data assignments.
     That's why they are called dynamically-type languages.
    */
    
    /*
     Integer numbers:
     Fundamental Types:
     short: 2 Bytes
     int: 4 Bytes
     long: 4 Byte (same)
     long long: 8 Bytes
     */
    
    /*
     Numbers with decimal places:
     float: 4 Bytes
     double: 8 Bytes
     long double: 8 Bytes
     */
    
    /*
     Bool: 1 Byte: true/false
     char: 1
     */
    
    double price = 99.99;
    float interest_rate = 3.67F;
    long file_size = 9000L;
    char letter = 'a';
    bool is_valid = true;
    auto iss_valid = true;
    
    cout << "Hello, World!" << endl;
    
    // Initialize tip: using {}
    
    int num =3;
    cout<< "The number is: " << num <<endl;
        
    return 0;
}
