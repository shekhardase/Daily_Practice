// #include <vector>
// using namespace std;

// class MyCircularDeque {
// public:
//     vector<int> v;
//     int front, rear, size, maxSize;

//     MyCircularDeque(int k) {
//         v = vector<int>(k, -1);  // Initialize vector of size `k` with -1 (or any placeholder value)
//         front = -1;   // Index of the front element
//         rear = -1;    // Index of the rear element
//         size = 0;     // Number of elements currently in the deque
//         maxSize = k;  // Maximum capacity of the deque
//     }

//     bool insertFront(int value) {
//         if (isFull()) return false;  // Check if deque is full
//         if (isEmpty()) { 
//             front = rear = 0;  // If it's the first element, both front and rear point to 0
//         } else {
//             front = (front - 1 + maxSize) % maxSize;  // Circularly move front backward
//         }
//         v[front] = value;  // Insert at the front
//         size++;
//         return true;
//     }

//     bool insertLast(int value) {
//         if (isFull()) return false;  // Check if deque is full
//         if (isEmpty()) {
//             front = rear = 0;  // If it's the first element, both front and rear point to 0
//         } else {
//             rear = (rear + 1) % maxSize;  // Circularly move rear forward
//         }
//         v[rear] = value;  // Insert at the rear
//         size++;
//         return true;
//     }

//     bool deleteFront() {
//         if (isEmpty()) return false;  // Check if deque is empty
//         if (front == rear) {  // If there's only one element, reset front and rear
//             front = rear = -1;
//         } else {
//             front = (front + 1) % maxSize;  // Circularly move front forward
//         }
//         size--;
//         return true;
//     }

//     bool deleteLast() {
//         if (isEmpty()) return false;  // Check if deque is empty
//         if (front == rear) {  // If there's only one element, reset front and rear
//             front = rear = -1;
//         } else {
//             rear = (rear - 1 + maxSize) % maxSize;  // Circularly move rear backward
//         }
//         size--;
//         return true;
//     }

//     int getFront() {
//         if (isEmpty()) return -1;  // Return -1 if deque is empty
//         return v[front];
//     }

//     int getRear() {
//         if (isEmpty()) return -1;  // Return -1 if deque is empty
//         return v[rear];
//     }

//     bool isEmpty() {
//         return size == 0;
//     }

//     bool isFull() {
//         return size == maxSize;
//     }
// };

// /**
//  * Your MyCircularDeque object will be instantiated and called as such:
//  * MyCircularDeque* obj = new MyCircularDeque(k);
//  * bool param_1 = obj->insertFront(value);
//  * bool param_2 = obj->insertLast(value);
//  * bool param_3 = obj->deleteFront();
//  * bool param_4 = obj->deleteLast();
//  * int param_5 = obj->getFront();
//  * int param_6 = obj->getRear();
//  * bool param_7 = obj->isEmpty();
//  * bool param_8 = obj->isFull();
//  */

// https://leetcode.com/problems/design-circular-deque/description/?envType=daily-question&envId=2024-09-28