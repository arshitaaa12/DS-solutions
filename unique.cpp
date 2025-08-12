#include<iostream>
using namespace std;
int unique(int *arr, int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
}
int main(){
    return 0;
}