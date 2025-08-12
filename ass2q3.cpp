#include <iostream>
using namespace std;

int missing(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] != i) {
            return i;
        }
    }
    return n;
}

int main() {
    int arr[] = {0, 1, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Missing number: "<<missing(arr, n)<<endl;
    return 0;
}
