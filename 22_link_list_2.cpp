// Editted by Ali Behfarnia on 2024.
// Goal: creation of linked list with three nodes
//       node insertion in the front

#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node* next = nullptr;
};

void print_list (Node*n);
void insert_new(Node**head_n, int new_val);


int main() {
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
//    Addresses:
    cout<< "current Head ptr: " << head <<endl;
    cout<< "current Addr of Header: " << &head <<endl;
    cout<< "current Second ptr: " << second <<endl;
    cout<< "current Third ptr: " << third <<endl;
    cout<< "\n";

    head -> value = 10;
    head -> next = second;
    second -> value = 20;
    second -> next = third;
    third -> value = 30;
    third -> next = nullptr;
    
    insert_new(&head, -10);
    
//    cout<< "BBBBB" << &head <<endl;
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


void insert_new(Node**head, int new_val){
    // New node creation
    Node * new_node = new Node();
    new_node-> value = new_val;
    
//    cout<< "In function: " << *head <<endl;
    // put it in the front of the list
    new_node-> next = *head;
    
    // move head of the list to the point the new_node
    *head = new_node;
//    cout<< "In function 2: " << *head <<endl;
    
}