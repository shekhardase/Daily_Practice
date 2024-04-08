// #include <bits/stdc++.h>

// using namespace std;

// class Stack
// {
// public:
//     int *arr; // array to store elements
//     int top;  // index of the top element
//     int size; // maximum size of the stack

//     // Constructor
//     Stack(int size)
//     {
//         this->size = size;
//         arr = new int[size]; // dynamically allocate memory for the array
//         top = -1;            // initialize top as -1 to indicate an empty stack
//     }

//     // Push an element onto the stack
//     void push(int element)
//     {
//         if (size - top > 1) // check if there is space in the stack
//         {
//             top++;              // increment top
//             arr[top] = element; // store the element at the top index
//         }
//         else
//         {
//             cout << "Stack overflow" << endl; // display error message if stack is full
//         }
//     }

//     // Pop an element from the stack
//     void pop()
//     {
//         if (top >= 0) // check if stack is not empty
//         {
//             top--; // decrement top to remove the top element
//         }
//         else
//         {
//             cout << "Stack Underflow" << endl; // display error message if stack is empty
//         }
//     }

//     // Get the top element of the stack
//     int peek()
//     {
//         if (top >= 0) // check if stack is not empty
//         {
//             return arr[top]; // return the element at the top index
//         }
//         else
//         {
//             cout << "Stack is empty " << endl; // display error message if stack is empty
//             return -1;                         // return -1 to indicate an empty stack
//         }
//     }

//     // Check if the stack is empty
//     bool isEmpty()
//     {
//         if (top == -1) // check if top is -1, indicating an empty stack
//         {
//             return true; // return true if stack is empty
//         }
//         else
//         {
//             return false; // return false if ''stack is not empty
//         }
//     }

//     void clear()
//     {
//         top = -1;
//     }

//     void displayTop()
//     {
//         for (int i = top; i >= 0; i--)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void displayBottom()
//     {
//         for (int i = 0; i <= top; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void sum()
//     {
//         int store = 0;
//         for (int i = top; i >= 0; i--)
//         {
//             store = store + arr[i];
//         }

//         cout << store << endl;
//     }

//     vector<int> implement()
//     {
//         vector<int> temp;

//         for (int i = top; i >= 0; i--)
//         {
//             temp.push_back(arr[i]);
//         }
//         return temp;
//     }
// };

// int main()
// {
//     Stack st(10); // create a stack object with maximum size of 10

//     for (int i = 0; i < 10; i++)
//     {
//         st.push(i); // push elements onto the stack
//     }

//     st.displayTop(); // call the display() function on the stack object
//     st.displayBottom();
//     st.sum(); // sum of stack
//     st.implement();

//     // vector<int> temp = st.implement(); // get the vector from the stack object

//     // Print the elements of the vector
//     // for (int i = 0; i < temp.size(); i++)
//     // {
//     //     cout << temp[i] << " ";
//     // }
//     // cout << endl;

//     return 0;
// }

// Stack implementation using Linked List

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;   // data stored in the node
    node *next; // pointer to the next node

    // Constructor
    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Stack
{
public:
    node *top; // pointer to the top node

    // Constructor
    Stack()
    {
        top = nullptr; // initialize top as nullptr to indicate an empty stack
    }

    // Push an element onto the stack
    void push(int element)
    {
        node *newNode = new node(element); // create a new node with the given element
        newNode->next = top;               // set the next pointer of the new node to the current top node
        top = newNode;                     // update the top pointer to the new node
    }

    // Pop an element from the stack
    void pop()
    {
        if (top != nullptr) // check if stack is not empty
        {
            node *temp = top; // store the current top node in a temporary variable
            top = top->next;  // update the top pointer to the next node
            delete temp;      // delete the temporary variable to free memory
        }
        else
        {
            cout << "Stack Underflow" << endl; // display error message if stack is empty
        }
    }

    // Get the top element of the stack
    int peek()
    {
        if (top != nullptr) // check if stack is not empty
        {
            return top->data; // return the data of the top node
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
        return top == nullptr; // return true if top is nullptr, indicating an empty stack
    }
};

int main()
{
    Stack st; // create a stack object

    st.push(1); // push elements onto the stack
    st.push(2);
    st.push(3);

    cout << st.peek() << endl; // get the top element of the stack

    st.pop(); // pop an element from the stack

    cout << st.peek() << endl; // get the top element of the stack

    cout << st.isEmpty() << endl; // check if the stack is empty

    return 0;
}