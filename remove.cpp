#include<iostream>
#include<string>
using namespace std;

class solution {
public:
    string remove_occurrences(string s, string part) {
        while (s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        return s;
    }
}
};

int main() {
    solution obj;
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = obj.remove_occurrences(s,part);
    cout<<"After removal: "<<result<<endl;
    return 0;
}