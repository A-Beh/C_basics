//  main.cpp
//  [17] Dynamic Memory
//  Created by Ali Behfarnia on 8/18/24.


#include <iostream>

using namespace std;

int main() {
    
    // Dynamic memory: It's useful when we don't know how much memory is needed.
    //                 Use the 'new' operator to allocate memory in the heap
    //                 rather than stack;
    
    //Example 1:
    
    int *p_num = nullptr;
    p_num = new int;
    int a = 21;
    *p_num = a;

    cout << "Address: " << p_num << endl;
    cout << "Value: " << *p_num << endl;

    delete p_num;
    
    
    // Example 2: Dynamic array
    
    string *p_grade = nullptr;
    int size;
    
    cout << "How many grades to enter in?: " ;
    cin >> size;
    
    p_grade = new string[size];
    
    for (int i = 0; i < size; i++){
        cout << "Enter grade # " << i+1 << ": ";
        cin >> p_grade[i];
    }
    
    for (int i=0; i< size; i++){
        cout << p_grade[i] << " ";
    }
    
    delete[] p_grade;
    
    cout << '\n';
    
    return 0;
}
