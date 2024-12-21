//  Editted by Ali Behfarnia on 2024

// Node after
// 1. check if previous node is nullptr
// 2. create a new_node
// 3. Insert new_node after the previous node

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next = nullptr;
};

void print_list(Node*n);
void insert_after(Node*previous, int new_val);


int main() {
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head -> val = 10;
    head -> next = second;
    
    second -> val = 20;
    second -> next = third;
    
    third -> val = 30;
    third -> next = nullptr;
    
    int n_val= 99;
    insert_after(head, n_val);
//    insert_after(second, -3);
    
    
    print_list(head);
    
    
    cout << "Hello, World" << endl;
        
    return 0;
}

void print_list(Node*n){
    
    while(n != nullptr){
        cout << n->val << endl;
        n = n-> next;
    }
    
}

void insert_after(Node*previous, int new_val){
    
    // 1. check if previous node is null
    if (previous == nullptr){
        cout <<"Previous can not be nullptr"<<endl;
        return;
    }
    
    // 2. create a new_node
    Node* new_node = new Node();
    new_node -> val = new_val;
    new_node -> next = previous -> next;
    previous -> next = new_node;
    
}
