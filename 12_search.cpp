//  main.cpp
//  [12] search_array
//  Created by Ali Behfarnia on 09/10/24.

#include <iostream>
using namespace std;

int search_in_array(int array[], int size, int element);
int search_in_array2(string foods[], int size, string choice);

int main(){
    int numbers[] = {100, 3, 23, 99, 5};
    string foods[] = {"Hamburger", "Pizza", "Hotdog"};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int size2 = sizeof(foods)/sizeof(foods[0]);
    int indx = 2000;
    int indx2 = 2000;
    int fav_num;
    string fav_food;
    
    cout<< "plz enter your number: ";
    cin >> fav_num;

    cout<< "plz enter your food: ";
    cin >> fav_food;

    indx = search_in_array(numbers, size, fav_num);
    indx2 = search_in_array2(foods, size2, fav_food);
    
    if (indx != -1){
        cout<< "Here's the index of your number: "<< indx <<endl;
    } else{
        cout<< "Your number is NOT in the array, try again!" <<endl;
    }
    
    if (indx2 != -1){
        cout<< "Here's the index of your food: "<< indx2 <<endl;
    } else{
        cout<< "Your food is NOT in the array, try again!" <<endl;
    }
    
    return 0;
}

int search_in_array2(string foods[], int size2, string choice){
    
    for (int i = 0; i< size2; i++) {
        
        if (foods[i] == choice){
            return i;
        }
        
    }
    return -1;
}

int search_in_array(int array[], int size, int element){
    
    for (int i = 0; i< size; i++) {
        
        if (array[i] == element){
            return i;
        }
        
    }
    return -1;
}
