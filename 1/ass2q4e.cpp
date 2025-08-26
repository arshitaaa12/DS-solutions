#include<iostream>
using namespace std;
char tolowerchar(char c) {
    if(c >= 'A' && c <= 'Z'){
        return c+32;
    }
    return c;
}
int main(){
    char c;
    cout<<"Enter the character: ";
    cin>>c;
    char result = tolowerchar(c);
    cout<<"Lower case character: "<<result;
    return 0;
}