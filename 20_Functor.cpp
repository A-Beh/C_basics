// Editted by Ali Behfarnia on 09/24.

// functor: (function + constructor)
// A functor in C++ is an object that can be treated like a function.
//
// Notes:
// a. Allows flexibility in function-like objects, such as passing custom operations to std::sort or std::for_each.
// b. operator() is a special function in C++ that allows an object to be called like a function.
// c. operator< is often used to define a custom comparison operation, typically for sorting or ordering elements.

#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

struct students{
    double GPA=0;
    string name;
    
    double operator()(double update_rslt){
        GPA = update_rslt;
        return GPA;
    }
    
    string operator()(string namee){
        name = namee;
        return name;
    }
    
    // The < operator is used to compare two students objects.
    bool operator<(const students& other) const {
        return GPA < other.GPA;
    }
    
    void operator()(int a) {
        std::cout << a << " ";
    }
};

int main() {
    students std1, std2, std3;
    std1(3.8);
    std1("AB");
    
    std2(3.5);
    std2("CD");
    
    std3(3.9);
    std3("EF");
    
    vector<students> student_lst = {std1, std2, std3};
    
    // sort relies on the < operator to determine the order of elements.
    sort(student_lst.begin(), student_lst.end());

    cout << "Sorted Students by GPA:\n";
    for (const auto& std : student_lst) {
        cout << "Student: " << std.name << ", GPA: " << std.GPA << endl;
    }
    
    // The application of for_each()
    vector<int> vec = {1, 2, 3, 4, 5};
    for_each(vec.begin(), vec.end(), students());

    return 0;
}
