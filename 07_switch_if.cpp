//  main.cpp
//  [7] Switch and if
//  Created by Ali Behfarnia on 8/22/24.

#include <iostream>

using namespace std;

int main() {
    
    int season;
    cout << "Enter your season number (1-4): ";
    cin >> season;
    
    switch(season){
        case 1:
            cout << "Nice Weather" <<endl;
            break;
        case 2:
            cout << "Hot Weather" <<endl;
            break;
        case 3:
            cout << "Chilly Weather" <<endl;
            break;
        case 4:
            cout << "Cold Weather" <<endl;
            break;
        default:
            cout << "Make sure numbers among 1 to 4, starting Spring"<<endl;
            break;
    }
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (18 <= age && age <= 60){
        cout << "Get in and enjoy" << endl;
    }
    else if (61 <=age && age <= 80){
        cout << "Be careful with alcohol" <<endl;
    }
    else
    {
        cout << "Get out" << endl;
        cout << "It's too early or too late to have fun like this!" << endl;
    }
            
    return 0;
}
