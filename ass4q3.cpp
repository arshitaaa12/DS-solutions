#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n, x;
    cout<<"Enter number of elements: ";
    cin>>n;

    queue<int> q;
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>x;
        q.push(x);
    }

    queue<int> firstHalf;
    int half = n/2;

    for(int i=0;i<half;i++){
        firstHalf.push(q.front());
        q.pop();
    }

    while(!firstHalf.empty()){
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }

    if (n%2!=0){
        q.push(q.front());
        q.pop();
    }

    cout<<"Interleaved queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}