#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Emter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    int arr[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        int rowsum=0;
        for(int j=0;j<cols;j++){
            rowsum += arr[i][j];
        }
        cout<<"Row: "<<i+1<<" = "<<rowsum<<endl;
    }

    for(int j=0;j,cols;j++){
        int colsum = 0;
        for(int i=0;i<rows;i++){
            colsum += arr[i][j];
        }
        cout<<"Column "<<j+1<<" = "<<colsum<<endl;
    }
    return 0;
}