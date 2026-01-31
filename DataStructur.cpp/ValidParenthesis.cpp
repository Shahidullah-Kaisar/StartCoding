#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = { {'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')',3} };

string isBalanced(string s){
    stack<char>st;

    for(char ch: s){
        if(symbols[ch] < 0){
            st.push(ch);
        }else{
            if(st.empty()){
                return "NO";
            }

            char top = st.top();
            st.pop();

            if(symbols[top] + symbols[ch] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    return "NO";
   
}

int main(){
    int t;
    cin>>t;

    while (t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;

    }
    
}