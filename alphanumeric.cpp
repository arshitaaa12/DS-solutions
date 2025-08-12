#include<iostream>
using namespace std;
bool alphanumeric(char ch){
    if((ch>='0' && ch<='9')||
       (ch>='a' && ch<='z')||
       (ch>='A' && ch<='Z')){
        return true;
    }
    return false;
}
int main(){
    char ch;
    cout<< "Enter a character: " << endl;
    cin>>ch;

    if(alphanumeric(ch)){
        cout<<ch<<" is alphanumeric."<<endl;
    } else {
        cout<<ch<<" is not alphanumeric."<<endl;
    }
    return 0;
}