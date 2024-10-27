#include <iostream>
#include <cstdio>  // for fprintf

using namespace std;

int main() {
    // ================ Swap ================
    int a = 1, b = 2;
    int c = 100;
    int temp = a;

    cout << " ------ " << endl;
    cout << "a before swap: " << a << endl;
    cout << "b before swap: " << b << endl;

    // Swap values
    a = b;
    b = temp;

    cout << " ** " << endl;             // Print a blank line using cout
    cout << "a after swap: " << a << endl;
    cout << "b after swap: " << b << endl;
    cout << " ------ " << endl; 

    // =============
    // Constant
    // =============
    const double pi = 3.14;
    cout << "Pi = " << pi << "\n";
    cout << " ------ " << endl; 
    // =============
    // Naming Convension
    // =============
    //    int file_sizee; // Snake case
    //    int FileSize; // Pascal case
    //    int fileSize; // Camel case

    // =============
    // Math Expression, Prefix and Postfix
    // =============
    int x = 10;
    int y = 3;
    int z = x % y; // x and y are called operand, + is operation
    
    cout << "x is: " << x <<endl;
    cout << "y is: " << y <<endl;
    cout << "Z is the remainder of x/y = " << z <<"\n";
    cout << " ------ " << endl; 

    int x1 = 10;
    int y1 = x1++; // Postfix ++: x1 = 11, and y1 = 10
    
    cout << "y1 is equal to = " << y1 <<endl
         << "x1 is equal to = " << x1 <<endl;
    
    int y2 = ++x1;  // Prefix ++: x1 = 12, and y2 =12
    
    cout << "x1 is equal to = " << x1 <<endl
         << "y2 is equal to = " << y2 <<endl;
    cout << " ------ " << endl; 


    return 0;
}
