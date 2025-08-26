#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";;
    cin>>n;

    int count = 0;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((i<j) && (arr[i]>arr[j])){
                count++;
            }
        }
    }

    cout<<"Number of inversions: "<<count<<endl;
    return 0;
}