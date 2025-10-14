#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void insert(Node*& head, int a){
    Node* newNode = new Node{a, NULL};
    if(!head){
        head = newNode;
    } else{
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void reverse(Node*& head){
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void display(Node* head) {
    while(head){
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main(){
    Node* head = NULL;
    int n, a;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        insert(head, a);
    }
    cout<<"Original: ";
    display(head);
    reverse(head);
    cout<<"Reversed: ";
    display(head);
}
