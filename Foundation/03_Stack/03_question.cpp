#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
     while(!(st.empty())){
        cout<<st.top()<<" ";
       st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(34);
    st.push(24);
    st.push(1);
    print(st);
    return 0;
}