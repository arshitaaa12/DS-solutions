#include<iostream>
using namespace std;
#define MAX 5

class Circular_Queue{
    int arr[MAX];
    int front;
    int rear;
public:
    Circular_Queue(){
        front = -1;
        rear = -1;
    }

    bool isFull(){
        return (front == (rear+1)%MAX);
    }

    bool isEmpty(){
        return front == -1;
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"Overflow."<<endl;
            return;
        }
        if(isEmpty()){
            front = rear = 0;
        }
        arr[++rear] == x;
        cout<<x<<" enqueued"<<endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Underflow."<<endl;
            return;
        }
        cout<<arr[front]<<" dequeued."<<endl;
        if(front == rear){
            front = rear = -1;
        } else{
            front = (front + 1)%MAX;
        }
    }

    void peek(){
        if(isEmpty()){
            cout<<"Empty."<<endl;
        } else{
            cout<<"Front element: "<<arr[front]<<endl;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"Empty."<<endl;
            return;
        }
        cout<<"Elements are: ";
        int i=front;
        while(true){
            cout<<arr[i]<<" ";
            i = (i+1)%MAX;
        }   
        cout<<endl;
    }
};

int main(){
    Circular_Queue q;
    int choice;
    int n;

    do{
        cout<<"1. Enqueue 2. Dequeue 3. IsEmpty 4. IsFull 5. Display 6. Peek 0. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter value: ";
            cin>>n;
            q.enqueue(n);
            break;

            case 2:
            q.dequeue();
            break;

            case 3:
            cout<< (q.isEmpty()?"Empty\n":"Not Empty\n");
            break;

            case 4:
            cout<<(q.isFull()?"Full\n":"Not Full\n");
            break;

            case 5:
            q.display();
            break;

            case 6:
            q.peek();
            break;
        }
    } while (choice != 0);
    return 0;
}