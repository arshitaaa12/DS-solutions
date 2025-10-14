#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;

void insertAtBeg(int a){
    Node* newNode = new Node{a, head};
    head = newNode;
}

void insertAtEnd(int a){
    Node* newNode = new Node{a, nullptr};
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAfter(int a, int key){
    Node* temp = head;
    while(temp && temp->data != key){
        temp = temp->next;
    }
    if(!temp){
        cout<<"Node not found."<<endl;
        return;
    }
    Node* newNode = new Node{a, temp->next};
    temp->next = newNode;
}

void insertBefore(int a, int key){
    if(!head){
        return;
    }
    if(head->data == key){
        insertAtBeg(a);
        return;
    }
    Node* temp = head;
    while(temp->next && temp->next->data != key){
        temp = temp->next;
    }
    if(!temp->next){
        cout<<"Node not found."<<endl;
        return;
    }
    Node* newNode = new Node{a, temp->next};
    temp->next = newNode;
}

void deleteBeg(){
    if(!head){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(){
    if(!head){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteSpecific(int key){
    if(!head){
        return;
    }
    if(head->data == key){
        deleteBeg();
        return;
    }
    Node* temp = head;
    while(temp->next && temp->next->data != key){
        temp = temp->next;
    }
    if(!temp->next){
        cout<<"Node not found."<<endl;
        return;
    }
    Node* curr = temp->next;
    temp->next = curr->next;
    delete curr;
}

void search(int key){
    Node* temp = head;
    int pos = 1;
    while(temp){
        if(temp->data == key){
            cout<<"Node found at specific position: "<<pos<<endl;
            return;
        }
        pos++;
        temp = temp->next;
    }
    cout<<"Node not found."<<endl;
}

void display(){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
    int choice;
    int a;
    int key;
    while(1){
        cout<<"1.Insert Beg 2.Insert End 3.Insert Before 4.Insert After 5.Delete Beg 6.Delete End 7.Delete Specific 8.Search 9.Display 10.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>a;
                insertAtBeg(a);
                break;
            case 2:
                cout<<"Enter value: ";
                cin>>a;
                insertAtEnd(a);
                break;
            case 3:
                cout<<"Enter key & value: ";
                cin>>key>>a;
                insertBefore(key, a);
                break;
            case 4:
                cout<<"Enter key & value: ";
                cin>>key>>a;
                insertAfter(key, a);
                break;
            case 5:
                deleteBeg();
                break;
            case 6:
                deleteEnd();
                break;
            case 7:
                cout<<"Enter key: ";
                cin>>key;
                deleteSpecific(key);
                break;
            case 8:
                cout<<"Enter key: ";
                cin>>key;
                search(key);
                break;
            case 9:
                display();
                break;
            case 10:
                exit(0);
        }
    }
    return 0;
}