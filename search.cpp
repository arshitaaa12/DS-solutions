#include<iostream>
using namespace std;

bool linearsearch(int mat[][3], int row, int col, int key, int &r, int &c){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j] == key){
                r = i;
                c = j;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};;
    int rows = 4;
    int cols = 3;
    int a, b;

    if(linearsearch(matrix, rows, cols, 8, a, b)){
        cout<<"Elements found at row: "<<a<<" column: "<<b<<endl;
    } else {
        cout<<"Element not found."<<endl;
    }
    return 0;
}