#include<iostream>
using namespace std;

struct Triple{
    int row;
    int col;
    int value;
}; 
int main(){
    int rows, cols, nonzero;;
    cout<<"Enter the number of wors, columns and non zero elements: ";
    cin>>rows>>cols>>nonzero;
   
    Triple t[100];
    cout<<"Enter triplet: "<<endl;
    for(int i=0;i<nonzero;i++){
        cin>>t[i].row>>t[i].col>>t[i].value;
    }

    Triple trans[100];
    for(int i=0;i<nonzero;i++){
        trans[i].row = t[i].col;
        trans[i].col = t[i].row;
        trans[i].value = t[i].value;
    }

    for (int i=0;i<nonzero-1;i++){
        for (int j =i+1;j<nonzero;j++){
            if (trans[i].row > trans[j].row ||(trans[i].row == trans[j].row && trans[i].col > trans[j].col)) {
                swap(trans[i], trans[j]);
            }
        }
    }
    return 0;
}