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

void findmiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow){
        cout<<"Middle element: "<<slow->data<<endl;
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
    findmiddle(head);
    return 0;
}