#include<iostream>
using namespace std;
#define MAX 100

class Queue{
    int arr[MAX];
    int front, rear, size;
public:
    Queue(){
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty(){
        return size == 0;
    }

    bool isFull(){
        return size == MAX;
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"Overflow."<<endl;
            return;
        }
        rear = (rear+1)%MAX;
        arr[rear] = x;
        size++;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Underflow."<<endl;
            return;
        }
        front = (front+1)%MAX;
        size--;
    }

    int getFront(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
            return -1;
        }
        return arr[front];
    }
};

int main(){
    int n, x;
    cout<<"Enter number of elements: ";
    cin>>n;

    Queue q;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>x;
        q.enqueue(x);
    }

    Queue firsthalf;
    int half = n/2;
    for(int i=0;i<half;i++){
        firsthalf.enqueue(q.getFront());
        q.dequeue();
    }

    while(!firsthalf.isEmpty()){
        q.enqueue(firsthalf.getFront());
        firsthalf.dequeue();

        q.enqueue(q.getFront());
        q.dequeue();
    }

    cout<<"Interleaved queue: ";
    while(!q.isEmpty()){
        cout<<q.getFront()<<" ";
        q.dequeue();
    }
    cout<<endl;
    return 0;
}