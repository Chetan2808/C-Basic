//minimum paranthesis to remove
#include <iostream>
#include <deque>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> d;
    for(int i = 0 ; i < s.size(); i++){
        char ch = s[i];
        if(ch == '(' || ch == ')'){
            if(ch=='(')//then push
            {
                d.push(ch);   
            }
            else{
                if(d.empty() || d.top()==')'){
                    d.push(ch);
                }
                else{
                    if(d.top()=='('){
                        d.pop();
                    }
                }
            }
        }
        
    }
    cout<<d.size();
    
}