// Editted by Ali Behfarnia on 2024.
// Goal: creation of linked list with three nodes

#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node* next = nullptr;
};

void print_list (Node*n);

int main() {
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
//    Addresses:
//    cout<< "current Head ptr: " << head <<endl;
//    cout<< "current Second ptr: " << second <<endl;
//    cout<< "current Third ptr: " << third <<endl;
//    cout<< "\n";

    head -> value = 10;
    head -> next = second;
    second -> value = 20;
    second -> next = third;
    third -> value = 30;
    third -> next = nullptr;
    
    print_list(head);
    cout << "Hello, World!\n";
    return 0;
}

void print_list (Node*n) {

    while(n!=nullptr)
    {
        cout << "current value: " << n->value <<endl;
        cout<< "current ptr: " << n <<endl;
        n = n -> next;
        cout << "next ptr: " << n <<endl;
        cout << "+++++"<<endl;
        
    }
    
}
