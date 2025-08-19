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

void multiply(Triplet A[], Triplet B[], Triplet C[]){
    if(A[0].col != B[0].row){
        cout<<"Not possible!";
        return;
    }

    int m = A[0].row, n = A[0].col, p = B[0].col;
    int k = 1;

    C[0].row = m;
    C[0].col = p;
    C[0].val = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            int sum = 0;

            for (int x = 1; x <= A[0].val; x++) {
                if (A[x].row == i) {
                    for (int y = 1; y <= B[0].val; y++) {
                        if (B[y].row == A[x].col && B[y].col == j) {
                            sum += A[x].val * B[y].val;
                        }
                    }
                }
            }

            if (sum != 0) {
                C[k].row = i;
                C[k].col = j;
                C[k].val = sum;
                k++;
            }
        }
    }

    C[0].val = k - 1;
}

int main() {
    Triplet A[10] = {
        {3, 3, 3},
        {0, 2, 3},
        {1, 0, 4},
        {2, 1, 5}
    };

    Triplet B[10] = {
        {3, 3, 2},
        {0, 1, 7},
        {1, 2, 6}
    };

    Triplet C[20];

    cout << "Matrix A (Triplet): ";
    print(A, A[0].val);

    cout << "Matrix B (Triplet): ";
    print(B, B[0].val);

    multiply(A, B, C);

    cout << "A x B (Triplet): ";
    print(C, C[0].val);

    return 0;
}