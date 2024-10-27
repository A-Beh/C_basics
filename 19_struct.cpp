// Editted by Ali Behfarnia on 09/24.

// Struct:
// A struct in C++ is a way to group together variables under a single name, essentially creating a new data type.
// It's short for "structure" and is similar to a class but with default public access.

#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

struct students{
    string name;
    double gpa;
    bool enrolled;
};

void print_func(students std){
    cout  << std.name<< " has the GPA of " << std.gpa << "."<<endl;
    cout<< "Address of the object is after passing" << &std <<endl;
}

int main(){
    students std1 ;
    std1.name = "AB";
    std1.gpa = 3.9;
    std1.enrolled = false;
    
    cout<< "Address of the object be fore passing is" << &std1 <<endl;
    print_func(std1);
    return 0;
}
