#include<iostream>
using namespace std;

void diagonal(int r, int arr[10][10]){
    cout<<"Enter size of matrix: ";
    cin>>r;

    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==j){
                cin>>arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    cout<<"Diagonal matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void tridi(int r, int arr[10][10]){
    cout<<"Enter size of matrix: ";
    cin>>r;

    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if((i==j) || (i-j == 1) || (i-j == -1)){
                cin>>arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    cout<<"Tri-Diagonal matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void lower(int r, int arr[10][10]){
    cout<<"Enter size of matrix: ";
    cin>>r;

    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if((i>=j)){
                cin>>arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    cout<<"Lower matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void upper(int r, int arr[10][10]){
    cout<<"Enter size of matrix: ";
    cin>>r;

    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if((i<=j)){
                cin>>arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    cout<<"Upper matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void sym(int r, int arr[10][10]){
    cout<<"Enter size of matrix: ";
    cin>>r;

    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=1;j<r;j++){
            cin>>arr[i][j];
            if(i!=j) arr[j][i] = arr[i][j];
        }
    }

    cout<<"Symmetric matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int r;
    int arr[10][10];

    diagonal(r ,arr);

    tridi(r ,arr);

    lower(r ,arr);

    upper(r ,arr);

    sym(r ,arr);

    return 0;
}