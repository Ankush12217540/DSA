// valid parenthesis leetcode proble : same type of bracket
#include<iostream>
#include<stack>
using namespace std;

bool check(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
       if(s[i]=='('){
        st.push(s[i]);
       }
       else{
        if(st.empty()){
            return 0;
        }else{
            st.pop();
        }
       }
    }
    return st.empty();
}

int main(){
    string s1="()()(()))";
    cout<<check(s1)<<endl;
    return 0;
}