#include<iostream>
#include<cstring>
using namespace std;

bool vowel(char ch){
    ch = tolower(ch);
    return (ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u');
}
int main(){
    char str[100], result[100];
    cout<<"Enter string: ";
    cin.getline(str,100);

    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(!vowel(str[i])){
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    cout<<"String without vowels: "<<result;
    return 0;
}