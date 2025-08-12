#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==-1 || i-j==0 || i-j==1){
                cout<<arr[i]<<" ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}