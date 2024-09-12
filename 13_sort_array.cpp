//  main.cpp
//  [13] Sort Array 1
//  Created by Ali Behfarnia on 09/11/24.

#include <iostream>

using namespace std;

void sort_array(int arr[], int size); //Declaration

int main() {
    
    int arr[] = {10, 8, 3, 5, 1, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    sort_array(arr, size);
    
    for(int item: arr){
        cout<< item <<" ";
    }
    
    
    cout << "\n";
    
    return 0;
}

void sort_array(int arr[], int size){
    int temp;
    
    for (int i =0; i< size ; i++){
        for (int j=0; j<size - i - 1 ; j++){
            
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}
