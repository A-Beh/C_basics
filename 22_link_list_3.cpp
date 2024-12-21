//  Edited by Ali Behfarnia on 2024.

// Four Steps to add the node at the end of linked list:
// 1. Prepare new node
// 2. If linked list is empty, new_node will be a head node
// 3. Find the last node
// 4. Insert new_node after the last node (at the end)

#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node* next= nullptr;
};

void print_list(Node*n);
void insert_end(Node**n, int d);

int main() {
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third =  new Node();
    
    head -> val = 10;
    head -> next = second;
    second -> val = 20;
    second -> next = third;
    third -> val = 30;
    third -> next = nullptr;
    
    int new_val = 500;
    insert_end(&head, new_val);
    
    print_list(head);
            
    cout << "Hello, World!\n";
    return 0;
}

void print_list(Node*n){
    
    while(n != nullptr){
        cout << n->val <<endl;
        n = n->next;
    }
}

void insert_end(Node**n, int d)
{
    // First: Add a new node
    Node* new_node = new Node();
    
    // Second: values and pointer
    new_node -> val = d;
    new_node -> next = nullptr;
    
    if (*n == nullptr){ // 3. Find the last node; If already exists
        *n = new_node;
        return;
    }
    // 3. Find the last node; If it's NOT there
    Node* last = *n;
    while(last -> next!= nullptr){
          last = last -> next;
    }
    
    // 4. Insert new_node after the last node (at the end)
    last -> next = new_node;
}