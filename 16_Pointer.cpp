//
//  main.cpp
//  [16] Pointer
//
//  Created by Ali Behfarnia on 8/18/24.
//

#include <iostream>
using namespace std;
int main() {
    
    // Pointer: variable that stores a memory address of another variable
    
    // &   Address of the operator/variable
    // *   Dereference operator
    
    string name = "Ali";
    string *pname = &name; // the data pointer of the variable should be the same as the variable
    int age = 22;
    int *page = &age;
    
    string foods[3] = {"Pizza1","Hotdog","Burger"};
    
    //Note: No need for & when using array. Example
    // string *pfood = &foods; is wrong because the foods is already memory address
    string *pfood = foods; //
    
    cout << pname << endl;
    cout << &name << endl;
    cout << *page << endl;
    cout << *pfood << endl;
    
    
    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)
    
    // nullptr = keyword represents a null pointer
    // nulptrs are helpful when determining if an address
    // was successfully assigned to a pointer.
    
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    
    cout << "++++++++ \n";
    
    if (pointer == nullptr){
        cout << "address was not assigned."<<endl;
    }
    else{
        cout << "address was assigned."<<endl;
        cout << *pointer <<endl;
    }
    

//    cout << *pointer <<endl;
    
    return 0;
}
