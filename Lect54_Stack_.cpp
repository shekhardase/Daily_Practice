#include <bits/stdc++.h>

using namespace std;

class Stack
{
public:
    int *arr; // array to store elements
    int top;  // index of the top element
    int size; // maximum size of the stack

    // Constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size]; // dynamically allocate memory for the array
        top = -1;            // initialize top as -1 to indicate an empty stack
    }

    // Push an element onto the stack
    void push(int element)
    {
        if (size - top > 1) // check if there is space in the stack
        {
            top++;              // increment top
            arr[top] = element; // store the element at the top index
        }
        else
        {
            cout << "Stack overflow" << endl; // display error message if stack is full
        }
    }

    // Pop an element from the stack
    void pop()
    {
        if (top >= 0) // check if stack is not empty
        {
            top--; // decrement top to remove the top element
        }
        else
        {
            cout << "Stack Underflow" << endl; // display error message if stack is empty
        }
    }

    // Get the top element of the stack
    int peek()
    {
        if (top >= 0) // check if stack is not empty
        {
            return arr[top]; // return the element at the top index
        }
        else
        {
            cout << "Stack is empty " << endl; // display error message if stack is empty
            return -1;                         // return -1 to indicate an empty stack
        }
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        if (top == -1) // check if top is -1, indicating an empty stack
        {
            return true; // return true if stack is empty
        }
        else
        {
            return false; // return false if ''stack is not empty
        }
    }

    void clear()
    {
        top = -1;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(10); // create a stack object with maximum size of 10

    for (int i = 0; i < 10; i++)
    {
        st.push(i); // push elements onto the stack
    }

    st.display(); // call the display() function on the stack object

    return 0;
}
