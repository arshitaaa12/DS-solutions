#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int freq[256] = {0}; 
    queue<char> q;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        freq[ch]++;
        q.push(ch);

        while(!q.empty() && freq[q.front()]>1){
            q.pop();
        }

        if(!q.empty())
            cout<<q.front()<<" ";
        else
            cout<<"-1 ";
    }

    return 0;
}