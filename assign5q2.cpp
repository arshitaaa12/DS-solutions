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
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int deletekey(Node*& head, int key){
    int count = 0;
    while(head && head->data == key){
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }

    Node* curr = head;
    while(curr && curr->next){
        if(curr->next->data == key){
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        count++;
        } else{
        curr = curr->next;
        }
    }
    return count;
}
void display(Node* head) {
    while (head) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main(){
    Node* head = NULL;
    int n, a, key;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for (int i=0;i<n;i++){
        cin>>a;
        insert(head, a);
    }
    cout<<"Enter key: ";
    cin>>key;
    int count = deletekey(head, key);
    cout<<"Count: "<<count<<endl;
    cout<<"Updated Linked List: ";
    display(head);
}