#include<iostream>
using namespace std;
#define MAX_SIZE 10
class queue{
   private:

   int arr[MAX_SIZE];
   int front = -1;
   int rear = -1;
   public:
   bool isEmpty(){
    if (front == -1) return 1;
    return 0;
   }
   bool isFull(){
    if (rear == MAX_SIZE-1) return 1;
    return 0;
   }
   void Enqueue(int val){
    if(isFull()) {
    cout<<"Queue is full"<<endl;
    return;
    }
    if(isEmpty()) front = 0;
    rear++;
    arr[rear] = val;
    return;
   }
   int Dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        front = -1,rear = -1;
        return -1;
    }
    int ans = arr[front];
    front++;
    return front;
   }
   int GetFront(){
    if(isEmpty()) {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    return arr[front];
   }
   int GetRare(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    return arr[rear];
   }
   void Display(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<"Queue is ";
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   }
};

int main(){
    queue Q1;
    cout<<Q1.isEmpty()<<endl;
    Q1.Enqueue(12);
    Q1.Enqueue(34);
   cout<< Q1.isEmpty()<<endl;
   Q1.Display();
   cout<<Q1.Dequeue()<<endl;
   Q1.Display();

    return 0;
}