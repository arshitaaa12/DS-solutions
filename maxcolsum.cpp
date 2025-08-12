#include<iostream>
#include<climits>
using namespace std;
int maxsum(int mat[][3], int rows, int cols){
    int maxcolsum = INT_MIN;

    for(int i=0;i<cols;i++){
        int colsumi = 0;
        for(int j=0;j<rows;j++){
            colsumi += mat[j][i];
        }
        maxcolsum = max(maxcolsum, colsumi);
    }
    return maxcolsum;
}
int main(){
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout<<maxsum(matrix, rows, cols)<<endl;
    return 0;
}