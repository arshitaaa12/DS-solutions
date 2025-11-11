#include<iostream>
using namespace std;

struct CNode{
    int data;
    CNode* next;
};

CNode* insertCLL(CNode* head, int value){
    CNode* newNode = new CNode{value, nullptr};
    if(head == nullptr){
        newNode->next = newNode;
        return newNode;
    }

    CNode* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

void display(CNode* head){
    if(!head){
        return;
    }
    CNode* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    } while(temp != head);
    cout<<head->data<<endl;
}

int main(){
    CNode* head  = nullptr;
    head = insertCLL(head, 20);
    head = insertCLL(head, 100);
    head = insertCLL(head, 40);
    head = insertCLL(head, 80);
    head = insertCLL(head, 60);

    cout<<"Circular linked list: ";
    display(head);
}