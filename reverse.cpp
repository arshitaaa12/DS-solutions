#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class solution{
public:
    string reversewords(string s){
        int n = s.length();
        string ans = "";

        reverse(s.begin(),s.end());

        for(int i=0;i<n;i++){
            string word= "";
            while(i<n&&s[i]!=' '){
                word += s[i];
                i++;
            }

            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
int main(){
    solution sol;
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    string result = sol.reversewords(s);
    cout<<"Reversed words: "<<result<<endl;
    return 0;
}