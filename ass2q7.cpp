#include<iostream>
using namespace std;
int inversion(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) {
                count ++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<inversion(arr, n);
    return 0;
}