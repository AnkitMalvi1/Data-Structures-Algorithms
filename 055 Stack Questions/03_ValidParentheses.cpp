// CodeStudio: Valid Parentheses

#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> st;
        for(int i=0; i<s.length(); i++) {
            
            char ch = s[i];
            
            //if opening bracket, stack push
            //if close bracket, stacktop check and pop
            
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else
            {
                //for closing bracket
                if(!st.empty()) {
                    char top = st.top();
                    if( (ch == ')' && top == '(') || 
                        ( ch == '}' && top == '{') || 
                        (ch == ']' && top == '[') ) {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                } 
            }  
        }

    if(st.empty())
        return true;
    else
        return false;
}