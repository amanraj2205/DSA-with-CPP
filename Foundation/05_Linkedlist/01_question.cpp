#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*  next;

Node(int val){
    data = val;
    next = NULL;
}

};
class List{
Node* head;
Node* tail;

public:
List(){
    head=tail = NULL;
}
void push_front(int val){
    Node* newNode = new Node(val);  //dynamic object
   // Node newNode(val); // static object
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        newNode ->next=head;
        head = newNode;
    }
}
void Push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail =NULL;
        return;
    }
    else{
        tail->next =newNode;
        tail = newNode;
    }
}
void pop_front(){
    if(head ==NULL){
        cout<<"Linked List is empty"<<endl;
        return ;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;
}

void pop_back(){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    temp ->next = NULL;
    delete tail;  // delete from memroy
    tail=temp;  
}
 
void insert(int val,int pos){
    if(pos<0){
        cout<<"Invalid postion"<<endl;
        return;
    }
    if(pos==0){
        push_front(val);
    }

    Node* temp = head;
    for(int i=0;i<pos-1;i++){
        if(temp == NULL){
            cout<<"Invalid postion";
            return;
        }
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int search(int key){
  Node* temp = head;
  int idx =0;
  while(temp != NULL){
    if(temp->data == key){
        return idx;
    }
    temp = temp ->next;
    idx++;
  }
  return -1;
}
void printAll(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
// Major funcation in linkedlist
/*
1. push front -- front me
2. push_back --last
3. pop back 
4. pop front 
*/


int main(){
List l1;
l1.push_front(1);
l1.push_front(2);
l1.push_front(3);
l1.insert(4,-1);
l1.printAll();
cout<<l1.search(2)<<endl;
return 0;
}