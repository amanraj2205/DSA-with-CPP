#include<iostream>
#include<queue>
using namespace std;

 //void Pseudo_Traversal(int q);

int main(){
    queue<int> q;
    if (q.empty())
    {
        cout << "Queue is empty " << endl;
    }
    q.push(12);
    q.push(56);
    q.push(23);
    cout<<"Front element of queue is "<<q.front()<<endl;
    cout<<"Rear element of queue is "<<q.back()<<endl;
    q.pop();
    cout<<"After pop opertion"<<endl;
    cout<<"Front element of queue is "<<q.front()<<endl;
    cout<<"Rear element of queue is "<<q.back()<<endl;
    q.push(89);
       if (!q.empty())
    {
        cout << "Queue is not empty. Front element: " << q.front() << endl;
    }
    cout<<"Size of queue is "<<q.size()<<endl;

    // Pseudo_Traversal

    queue<int> temp(q);

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }


    return 0;
}