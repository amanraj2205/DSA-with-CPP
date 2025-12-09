#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(23);
    st.push(12);
    st.push(90);
    st.pop();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}