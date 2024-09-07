#include <iostream>
#include <cstdio>  // for fprintf

using namespace std;

int main() {
    // ================ Swap ================
    int a = 1, b = 2;
    int temp = a;

    cout << " ------ " << endl;
    cout << "a before swap: " << a << endl;
    cout << "b before swap: " << b << endl;

    // Swap values
    a = b;
    b = temp;

    cout << " ------ " << endl;             // Print a blank line using cout
    cout << "a after swap: " << a << endl;
    cout << "b after swap: " << b << endl;
    cout << " ------ " << endl; 

    return 0;
}
