#include<iostream>
using namespace std;
#define MAX 100

class operations {
private:
    int arr[MAX];
    int size;

public:
    operations(){
        size = 0;
    }

    void create(){
        cout<<"Enter number of elements: ";
        cin>>size;

        if(size<1 || size>MAX) {
            cout<<"Invalid size.";
            size = 0;
            return;
        }

        cout<<"Enter "<<size<<" elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    void display(){
        if (size == 0) {
            cout<<"Array is empty."<<endl;
            return;
        }

        cout<<"Array elements: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void insert(){
        if(size >= MAX){
            cout<<"Array is full."<<endl;
            return;
        }

        int pos, value;
        cout<<"Enter position to insert: ";
        cin>>pos;

        if (pos<1 || pos>size+1) {
            cout<<"Invalid position."<<endl;
            return;
        }

        cout<<"Enter value to insert: ";
        cin>>value;

        for(int i=size;i>=pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = value;
        size++;
    }

    void deleteelement(){
        if (size == 0) {
            cout<<"Array is empty."<<endl;
            return;
        }

        int pos;
        cout<<"Enter position to delete: ";
        cin>>pos;
        if(pos<1 || pos>size) {
            cout<<"Invalid position."<<endl;
            return;
        }

        for(int i=pos-1;i<size-1;i++) {
            arr[i] = arr[i+1];
        }
        size--;
    }

    void linearSearch() {
        if (size == 0) {
            cout<<"Array is empty."<<endl;
            return;
        }

        int n;
        int found = -1;
        cout<<"Enter element to search: "<<endl;
        cin>>n;

        for (int i=0;i<size;i++) {
            if (arr[i] == n) {
                found = i;
                break;
            }
        }
        if(found != -1){
            cout<<"Element found at position: "<<found+1<<endl;
        } else {
            cout<<"Element not found."<<endl;
        }
    }
};
int main(){
   operations a;
   int choice;
   do{
    cout<<"Menu: ";
    cout<<"1.Create"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"3.Insert"<<endl;
    cout<<"4.Delete"<<endl;
    cout<<"5.Linear search"<<endl;
    cout<<"6.Exit"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
            a.create();
            break;

        case 2:
            a.display();
            break;

        case 3:
            a.insert();
            break;

        case 4:
            a.deleteelement();
            break;

        case 5:
            a.linearSearch();
            break;
        
        case 6:
            cout<<"Exiting program."<<endl;
            break;

        default:
            cout<<"Invalid choice."<<endl;
    }
   } while (choice!=6);
    return 0;
}