#include<iostream>
#include<stack>
using namespace std;

// Only the top element of the stack can be accessed using top() method.


int main(){
  stack<int> st;
  st.push(45);
  st.push(33);
  st.push(223);
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
    return 0;
}