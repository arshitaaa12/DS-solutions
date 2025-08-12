#include<iostream>
using namespace std;

void store(int diag[], int n){
    cout<<"Enter diagonal elements: ";
    for(int i=0;i<n;i++){
        cin>>diag[i];
    }
}

void display(int diag[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<diag[i]<<" ";
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;
    int diag[n];
    store(diag, n);
    display(diag, n);
    return 0;
}