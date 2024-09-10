//  main.cpp
//  [10] Arrays
//  Created by Ali Behfarnia on 09/01/24.

#include <iostream>

using namespace std;

int main() {
    // array = a data structure can hold multiple values
    //         values are accessed by an index number
    //         "kinda a variable that holds multiple values"
    
    string cars[] = {"Accord 07", "Civic 12"}; // One form
    string jobs[3]; // Another Form
    double prices[] = {4.00, 3.50, 2.39, 18.57};
    
    
    jobs[0] = "Teacher";
    jobs[1] = "Lawyer";
    jobs[2] = "Cheff";
     
//    cout << car[0] <<endl;
    
    for (int i = 0; i < 3; i++){
        cout << jobs[i] <<endl;
    }
    
    for (int i=0; i<sizeof(prices)/sizeof(prices[0]); i++){
        cout << prices[i] <<endl;
    }
    
    // +++++++++++++ sizeof()
    
    // sizeof() = determines the size of bytes of a:
    //            variable, data type, class, object etc;
    
    double gpa = 2.5;
    string name = "Ali";
    string students[] = {"AB", "CD", "ZZ"};
    
    cout << sizeof(name) << " bytes "<<endl;
    cout << sizeof(students) << " bytes "<<endl;
    cout << sizeof(students)/sizeof(students[0]) << " elements "<<endl;
    cout << sizeof(students)/sizeof(string) << " elements "<<endl;
    
    // +++++++++++++ Iterate over an array
    
    string employees[] = {"AB", "CD", "ZZ"};
    int sizee = sizeof(employees)/sizeof(employees[0]);
    for (int i =0; i< sizee ; i++){
        cout << employees[i] << endl;
    }
    
    // +++++++++++++ For each loop
    
    string faculties[] = {"A_B", "C_D", "Z_Z"};
    int grades[] = {92, 23, 100, 88};
    
    for (int grade: grades){
        cout << grade << endl;
    }
    
    cout<< " " <<endl;
    
    for (string facul: faculties){
        cout<< facul <<endl;
    }
    
    cout<< " " <<endl;
    
    return 0;
}
