#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int> st;
   st.push(23);
   st.push(12);
   cout<<"Top element of stack is "<<st.top()<<endl;
    return 0;
}