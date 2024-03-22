#include <bits/stdc++.h>

using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // behaviour

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(10);

    for (int i = 0; i < 10; i++)
    {
        st.push(i);
        cout << st.peek() << endl;
    }

    // cout << st.peek();

    // stack<int> s;

    // s.push(32);
    // s.push(332);
    // s.push(324);
    // cout << s.top() << endl;

    // if (s.empty())
    // {
    //     cout << "Stack is empty " << endl;
    // }
    // else
    // {
    //     cout << "NOt empty" << endl;
    // }

    // cout << s.size() << endl;
}
