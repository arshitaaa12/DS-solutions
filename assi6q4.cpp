#include<iostream>
using namespace std;

struct DNode{
    char data;
    DNode* prev;
    DNode* next;
};

DNode* insertEnd(DNode* head, char value){
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

bool isPalindrome(DNode* head){
    if(!head){
        return true;
    }
    DNode* tail = head;
    while(tail->next){
        tail = tail->next;
    }
    DNode* start = head;
    while(start != tail && start->prev != tail){
        if(start->data != tail->data){
            return false;
        }
        start = start->next;
        tail = tail->prev;
    }
    return true;
}

void display(DNode* head){
    DNode* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    DNode* dll = nullptr;
    string s;
    cout<<"Enter characters for DLL: "<<endl;
    cin>>s;

    for(char c : s) {
        dll = insertEnd(dll, c);
    }

    cout<<"Doubly Linked List: "<<endl;
    display(dll);

    if(isPalindrome(dll)){
        cout<<"Palindrome"<<endl;
    } else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}