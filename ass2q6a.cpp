#include<iostream>
using namespace std;
struct Triplet{
    int row, col, val;
};

void print(Triplet mat[], int n){
    for(int i=0;i<=n;i++){
        cout<<mat[i].row<<" "<<mat[i].col<<" "<<mat[i].val<<endl;
    }
    cout<<endl;
}

void transpose(Triplet A[], Triplet T[]){
    int n = A[0].val;
    T[0].row = A[0].col;
    T[0].col = A[0].row;
    T[0].val = n;

    int k = 1;
    for(int i=1;i<=n;i++){
        T[k].row = A[i].col;
        T[k].col = A[i].row;
        T[k].val = A[i].val;
        k++;
    }
}

int main(){
    Triplet A[10] = {
        {3, 3, 3},
        {0, 2, 3},
        {1, 0, 4},
        {2, 1, 5}
    };

    Triplet T[10];

    cout << "Original Matrix (Triplet): ";
    print(A, A[0].val);

    transpose(A, T);

    cout << "Transpose Matrix (Triplet): ";
    print(T, T[0].val);
    return 0;
}