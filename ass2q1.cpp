#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int size){
    int low = 0;
    int high = size -1 ;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == n){
            return mid;
        } else if(mid < n){
            low = mid + 1;
            high = size - 1;
        } else {
            low = 0;
            high = mid - 1;

        }
    }
    return -1;
}
int main(){
    int arr[] = {2, 4, 6, 8, 10, 11, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;

    cout<<"Enter element to search: ";
    cin>>n;

    int result = binarysearch(arr, n, size);
    if(result != -1){
        cout<<"Element found at: "<<result<<endl;
    } else {
        cout<<"Element not found."<<endl;
    }
    return 0;
}
