#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    if (d.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }
    d.push_front(12);
    d.push_back(1);
    d.push_back(9);
    // deque<int> d2 = {12,23,34,22,12,1};
    // for(int val:d2){
    //     cout<<val<<" ";
    // }
    // cout<<endl; 
    cout << "Elements in deque (added using push_back): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    d.push_front(30);
    d.push_front(20);
    d.push_front(10);

    cout << "Elements in deque (added using push_front): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    d.pop_back();
     cout << "Deque after pop_back(): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;
  
    d.pop_front();
    
    cout << "Deque after pop_front(): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

     cout << "The first element (front) is: "<< d.front() << endl;

     cout << "The last element (back) is: "<< d.back() << endl;

     cout << "The number of elements in the deque is: "<< d.size() << endl;    
    
     if (d.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

     d.clear();

     cout << "After clear(), size: " << d.size() << endl;

    if (d.empty()) {
        cout << "Deque is now empty." << endl;
    }
     

    return 0;
}