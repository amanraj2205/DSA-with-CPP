#include<iostream>
using namespace std;

class stack{
   private:
   int arr[100];
   int top = -1;
   public:
   bool isEmpty(){
       if(top==-1){
           return true;
       }
       else{
           return false;
       }
   }
   bool isOverflow(){
    if(top>=99){
        return true;
    }
    else{
        return false;
    }
   }
   bool isUnderflow(){
    if(top<= -1){
        return true;
    }
    else{
        return false;
    }
   }
   void push(int x){
    if(isOverflow()){
        cout<<"Stack overflow"<<endl;
        return;
    }
    else{
        top++;
        arr[top]= x;
        cout<<"Pushed "<<x<<" into stack"<<endl;
    }
   }
   int pop(){
    if(isUnderflow()){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else{
        return arr[top--];
    }
   }
    int peek(){
     if(isUnderflow()){
          cout<<"Stack is empty"<<endl;
          return 0;
     }
     else{
          return arr[top];
     }
    }
    void print(){
        int temp = top;
        while(temp != -1){
            cout<<arr[temp]<<" ";
            temp--;
        }
        cout<<endl;
    }
};


int main(){
    stack s;
    cout<<"Is stack empty? "<<(s.isEmpty() ? "Yes" : "No")<<endl;
    s.push(10);
    s.push(20);
    s.push(34);
    s.push(12);
    s.print();
    cout<<"Top element is: "<<s.peek()<<endl;
    cout<<"Popped element is: "<<s.pop()<<endl;
    cout<<"Is stack empty? "<<(s.isEmpty() ? "Yes" : "No")<<endl;
    s.print();


    return 0;
}