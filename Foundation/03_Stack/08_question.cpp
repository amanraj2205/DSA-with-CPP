#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Create a copy
    stack<int> temp(st);

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout<<endl;
   //cout<<temp.top()<<endl;   // nothinge is print
   cout<<st.top()<<endl;
    return 0;
}