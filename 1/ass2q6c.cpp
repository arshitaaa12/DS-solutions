#include <iostream>
using namespace std;

struct Triplet {
    int row, col, val;
};

void print(Triplet mat[], int n){
    for(int i=0;i<=n;i++){
        cout<<mat[i].row<<" "<<mat[i].col<<" "<<mat[i].val<<endl;
    }
    cout<<endl;
}

void add(Triplet A[], Triplet B[], Triplet C[]){
    if(A[0].row != B[0].row || A[0].col != B[0].col){
        cout<<"Addition not possible.";
        return;
    }

    int i=1, j=1, k=1;
    C[0].row = A[0].row;
    C[0].col = A[0].col;

    while(i <= A[0].val && j <= B[0].val){
        if(A[i].row < B[j].row || (A[i].row == B[j].row && A[i].col < B[j].col)){
            C[k++] = A[i++];
        }
        else if(B[j].row < A[i].row || (B[j].row == A[i].row && B[j].col < A[i].col)){
            C[k++] = B[j++];
        }
        else {
            C[k] = A[i];
            C[k].val = A[i].val + B[j].val;
            i++; j++; k++;
        }
    }

    while(i <= A[0].val) C[k++] = A[i++];
    while(j <= B[0].val) C[k++] = B[j++];

    C[0].val = k-1;
}

int main(){
    Triplet A[10] = {
        {3, 3, 3},
        {0, 0, 5},
        {0, 2, 3},
        {1, 1, 4}
    };

    Triplet B[10] = {
        {3, 3, 2},
        {0, 1, 7},
        {1, 1, 6}
    };

    Triplet C[20];

    cout<<"Matrix A(Triplet): "<<endl;
    print(A, A[0].val);

    cout<<"Matrix B(Triplet): "<<endl;
    print(B, B[0].val);

    add(A, B, C);

    cout<<"A + B(Triplet): "<<endl;
    print(C, C[0].val);

    return 0;
}
