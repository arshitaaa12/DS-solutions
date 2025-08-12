#include<iostream>
using namespace std;
//2 numbers whose sum is equal to target
//bruteforce: calculate sum of all pairs
int main(){
    int arr[] = {1, 5, 7, 2};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    //brute force approach
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] + arr[j] == target){
                cout<<"Indices: "<<i<<" and "<<j<<endl;
                cout<<"Values: "<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
            }
        }
    }
    cout<<"No valis pair found."<<endl;
    return 0;
}