//
//  main.cpp
//   Array - 2
//
//  Created by Ali Behfarnia on 09/10/24.
//

#include <iostream>

using namespace std;

double get_total (double prices[], int sizee); // function declaration


int main() {
    // insert code here...
    
    double prices[] = {12.23, 23.2, 1.00, 2.34};
    int sizee = sizeof(prices)/sizeof(prices[0]);
    double total = get_total(prices, sizee);
    cout <<  "  " << endl; 
    cout << "The total amount of prices is: $" << total<< endl;
    cout <<  "  " << endl; 
    return 0;
    }

double get_total (double prices[], int sizee){
    double total = 0;
    
    for (int i=0; i < sizee ;i++ ){
        total += prices[i];
        
    }
    return total;
}


//int search_in_array(int array[], int size, int element);
//
//int main2(){
//    int numbers[] = {100, 3, 23, 99, 5};
//    int size = sizeof(numbers)/sizeof(numbers[0]);
//    int indx=2000;
//    int fav_num;
//    
//    cout<< "plz enter your number: ";
//    cin >> fav_num;
//    
//    indx = search_in_array(numbers, size, fav_num);
//    
//    if (indx != -1){
//        cout<< "Here's the index of your number: "<< indx <<endl;
//    } else{
//        cout<< "Your number is NOT in the array, try again!" <<endl;
//    }
//    
//    return 0;
//}
//
//int search_in_array(int array[], int size, int element){
//    
//    for (int i = 0; i< size; i++) {
//        
//        if (array[i] == element){
//            return i;
//        }
//        
//    }
//    return -1;
//}
    
