//  main.cpp
//  [8] String
//  Created by Ali Behfarnia on 09/01/24.

#include <iostream>

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()){
        cout <<"You didn't put your name" <<endl;
    }
    else if (name.length() > 12) {
        cout << "Your name is too long, make it less than 12 char!" <<endl;
    }
    else if (name.length() <12 ){
        cout << "Welcome: "<< name <<endl;
    }
    else{
        cout << "Hello Match 12 letter name!!" <<endl;
    }

    name.append("@gmail.com");
    cout << name<<endl;

    name.insert(0,"#");
    cout << name<<endl;

    cout << name.find(' ')<<endl;

    return 0;
}