#include<iostream>
using namespace std;
int main(){
    int arr[100], n;
    cout<<"ENter the number of elements: "<<endl;;
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                //Shift elements
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    return 0;
}