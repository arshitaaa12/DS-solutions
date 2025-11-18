#include<iostream>
using namespace std;

class PriorityQueue{
private:
    int heap[100];
    int size;

    void heapifydown(int i){
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left<size && heap[left]>heap[largest]){
            largest = left;
        }

        if(right<size && heap[right]>heap[largest]){
            largest = right;
        }

        if(largest != i){
            swap(heap[i], heap[largest]);
            heapifydown(largest);
        }
    }

    void heapifyUp(int i){
        if(i && heap[(i - 1)/2]<heap[i]){
            swap(heap[i], heap[(i - 1)/2]);
            heapifyUp((i - 1)/2);
        }
    }

public:
    PriorityQueue(){
        size = 0;
    }

    void insert(int value){
        heap[size] = value;
        heapifyUp(size);
        size++;
    }

    int extractMax(){
        if (size <= 0)
            return -1;

        int max = heap[0];
        heap[0] = heap[size - 1];
        size--;
        heapifydown(0);

        return max;
    }

    void display(){
        cout<<"Priority Queue elements: ";
        for(int i = 0;i<size;i++)
            cout<<heap[i]<<" ";
        cout<<endl;
    }
};

int main(){
    PriorityQueue pq;

    pq.insert(15);
    pq.insert(50);
    pq.insert(20);
    pq.insert(40);
    pq.insert(10);

    pq.display();

    cout<<"Max element extracted: "<<pq.extractMax()<<endl;
    pq.display();

    return 0;
}