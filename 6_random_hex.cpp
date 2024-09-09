//  main.cpp
//  [6] Hex and Random
//  Created by Ali Behfarnia on 8/16/24.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
//    int number = 0b1111;
    int number2 = 0xf;
    cout << "Number is: " << number2 << endl;
    
    
    // Better readablity, using ' '
    int num = 100000;
    cout << "Num: " <<num << endl;
    
    // Random number
    time(nullptr);
    srand(5);
    int numb = rand();
    cout << "The rand number is: "<< numb <<endl;    
    
    srand(static_cast<unsigned int>(time(0)));
    int numb2 = rand() % 10;
    cout << "The rand number_2 is: " << numb2 << endl;
    
    // Write a program to roll a dice
    const int min_val = 1;
    const int max_val = 6;
    
    srand(static_cast<unsigned int>(time(0)));
    short first = (rand() % (max_val - min_val + 1)) + min_val;
    short second = (rand() % (max_val - min_val + 1)) + min_val;
    
    cout<< "First is: "<< first<< "\nSecond is: " << second<< endl;

    return 0;
}
