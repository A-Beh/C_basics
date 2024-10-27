// Editted 10/2024 by Ali Behfarnia
// Editted by Ali Behfarnia on 09/24.

// Lambda Function:
// A lambda function in C++ is an anonymous function that can be defined in place. It's handy for short, throwaway functions.
// [](){};      []: cpature clause, (): parameters, {}: function definition

#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    
    
    int d = 3;
    
    vector <int> v={1, 4, 11, 8, 21};
    // if we want to change the vaibale d in [], we must use the ref
    for_each(v.begin(), v.end(), [d](int x){ 
        if (x%d==0){
            cout<< x << " is divisibale by "<<d<<endl;
        }
        else{
            cout<< x << " is NOT divisibale by "<<d<<endl;
        }
    });
    return 0;
}


// Results:
// 1 is NOT divisibale by 3
// 4 is NOT divisibale by 3
// 11 is NOT divisibale by 3
// 8 is NOT divisibale by 3
// 21 is divisibale by 3
