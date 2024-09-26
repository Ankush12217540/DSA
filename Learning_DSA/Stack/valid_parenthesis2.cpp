// valid parenthesis for same type of bracket: using space complexity of O(1)
#include<iostream>
#include<stack>
using namespace std;

bool check(string s){
    // stack<char> st;
    int left=0;
    for(int i=0; i<s.size(); i++){
       if(s[i]=='('){
        left++;
       }
       else{
        if(left==0){
            return 0;
        }else{
            left--;
        }
       }
    }
    return left==0;
}

int main(){
    string s1="()()(()))";
    cout<<check(s1)<<endl;
    return 0;
}