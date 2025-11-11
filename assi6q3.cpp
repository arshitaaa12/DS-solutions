#include<iostream>
using namespace std;

struct DNode{
    int data;
    DNode* prev;
    DNode* next;
};

int sizeDLL(DNode* head){
    int count = 0;
    DNode* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

DNode* insertEnd(DNode* head, int value){
    DNode* newNode = new DNode{value, nullptr, nullptr};
    if(!head){
        return newNode;
    }
    DNode* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

struct CNode{
    int data;
    CNode* next;
};

int sizeCLL(CNode* head){
    if(!head){
        return 0;
    }
    int count = 1;
    CNode* temp = head->next;
    while(temp != head){
        count++;
        temp = temp->next;
    }
    return count;
}

CNode* insertAtEnd(CNode* head, int value){
    CNode* newNode = new CNode{value, nullptr};
    if(!head){
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

int main(){
    DNode* dll = nullptr;
    dll = insertEnd(dll, 10);
    dll = insertEnd(dll, 20);
    cout<<"Size of DLL: "<<sizeDLL(dll)<<endl;

    CNode* cll = nullptr;
    cll = insertAtEnd(cll, 10);
    cll = insertAtEnd(cll, 20);
    cout<<"Size of CLL: "<<sizeCLL(cll)<<endl;
    return 0;
}