#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int distinct = 0;
    for(int i=0;i<n;i++){
        bool seen = false;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                seen = true;
                break;
            }
        }
        if(!seen) distinct++;
    }

    cout<<"Distinct elemenys: "<<distinct;
    return 0;
}