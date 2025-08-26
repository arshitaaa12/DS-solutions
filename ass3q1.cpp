#include<iostream>
using namespace std;
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty(){
    return (top == -1);
}

int isFull(){
    return (top == MAX -1);
}

void push(){
    int a;
    if (isFull()){
        cout<<"Stack overflow."<<endl;
    } else {
        cout<<"Enter value to push: ";
        cin>>a;
        stack[++top] = a;
        cout<<a<<" pushed into stack."<<endl;
    }
};

void pop(){
    if (isEmpty()){
        cout<<"Stack underflow."<<endl;
    } else {
        cout<<stack[top--]<<" popped from stack."<<endl;
    }
};

void display(){
    if (isEmpty()){
        cout<<"Stack is empty."<<endl;
    } else {
        cout<<"Stack elements (top to bottom): ";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
};

void peek(){
    if (isEmpty()){
        cout<<"Stack is empty."<<endl;
    } else {
        cout<<"Top element is "<<stack[top]<<endl;
    }
};

int main(){
    int choice;
    while(1){
        cout<<"MENU: "<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Check if empty"<<endl;
        cout<<"4.Check if full"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Peek"<<endl;
        cout<<"7.Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                if((isEmpty())){
                    cout<<"Stack is empty."<<endl;
                } else {
                    cout<<"Stack is not empty."<<endl;
                }
                break;
            case 4:
                if((isFull())){
                    cout<<"Stack is full."<<endl;
                } else {
                    cout<<"Stack is not full."<<endl;
                }
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                exit(0);
            default:
                cout<<"Invalid choice."<<endl;

        }
    }
    return 0;
}