#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100], str2[50];

    cout<<"Enter first string: ";
    cin.getline(str1,100); //for char string this would work
    cout<<"Enter second string: ";
    cin.getline(str2,50);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i=0;i<len2;i++){
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';

    cout<<"Concatenated string: "<<str1;
    return 0;
}