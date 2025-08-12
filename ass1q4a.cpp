#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 elements of the array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int temp;
    int start = 0;
    int end = 4;

    for(int i = 0; i < 5 / 2; i++) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
        
    cout<<"Reversed array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}