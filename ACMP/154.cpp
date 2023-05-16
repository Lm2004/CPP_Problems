
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "()";
    stack<string> st;
    st.push(s[0]);
    for(int i = 1; i < s.length(); i++){
        if(st.top == '(' && s[i] ==')'){
            st.pop();
        } else if(st.top == '{' && s[i] =='}'){
            st.pop();
        } else if(st.top == '[' && s[i] ==']'){
            st.pop();
        } else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout << 'false';
    } else{
        cout << 'true';
    }
    return 0;
}