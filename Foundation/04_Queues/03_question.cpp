#include <iostream>
using namespace std;

#define MAX_SIZE 10

class Deque {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1));
    }

    // Insert at FRONT
    void InsertFront(int val) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }

        if (front == -1) {       // first element
            front = rear = 0;
        }
        else if (front == 0) {
            front = MAX_SIZE - 1; // circular back
        }
        else {
            front--;
        }

        arr[front] = val;
    }

    // Insert at REAR
    void InsertRear(int val) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }

        if (front == -1) {     // first element
            front = rear = 0;
        }
        else if (rear == MAX_SIZE - 1) {
            rear = 0;          // circular back
        }
        else {
            rear++;
        }

        arr[rear] = val;
    }

    // Delete from FRONT
    int DeleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        }

        int val = arr[front];

        if (front == rear) {   // only one element
            front = rear = -1;
        }
        else if (front == MAX_SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }

        return val;
    }

    // Delete from REAR
    int DeleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        }

        int val = arr[rear];

        if (front == rear) {    // only one element
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = MAX_SIZE - 1;
        }
        else {
            rear--;
        }

        return val;
    }

    // Display deque
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }

        cout << "Deque: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.InsertRear(10);
    dq.InsertRear(20);
    dq.InsertFront(5);
    dq.InsertFront(1);

    dq.display();

    cout << "Deleted front: " << dq.DeleteFront() << endl;
    cout << "Deleted rear : " << dq.DeleteRear() << endl;

    dq.display();

    return 0;
}
