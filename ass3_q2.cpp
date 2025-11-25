#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    char arr[MAX];
    int top;
public:
    Stack(){ 
        top = -1; 
    } 
    void push(char c){ 
        if(top == MAX- 1){ 
            cout<<"Stack overflow"<<endl; 
            return; 
        }
        arr[++top] = c; 
    } 
    char pop(){ 
        if(top == -1){ 
            cout<<"Stack underflow"<<endl; 
            return '\0'; 
        } 
        return arr[top--]; 
    } 
    bool isEmpty(){ 
        return(top == -1); 
    } 
}; 
int main(){ 
    string str = "DataStructure"; 
    Stack s; 
    for(int i=0;i<str.length();i++){ 
        s.push(str[i]); 
    } 
    string reversed = ""; 
    while(!s.isEmpty()){ 
        reversed += s.pop(); 
    } 
    cout<<"Original: "<<str<<endl; 
    cout<<"Reversed: "<<reversed<<endl; 
    return 0; 
}