#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    s="(()()())";
    stack<char> st;
    for(int i=0;i<s.length();i++){
       if(st.empty()){
           st.push(s[i]);
       }else{
               if(s[i]=='('){
                  st.push(s[i]);
               }else if(!st.empty() &&  st.top()==')'){
                 cout<<st.top()<<s[i];
                 st.pop();
               }else{
                 st.pop();
               }
               
            }
    }
    return 0;
}

