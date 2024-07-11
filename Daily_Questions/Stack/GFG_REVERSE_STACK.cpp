#include <iostream>
#include <stack>
using namespace std;

// void reverse(stack<int> myStack)
// {
//     if (myStack.empty())
//     {
//         return;
//     }

//     int top = myStack.top();
//     myStack.pop();
//     reverse(myStack);

//     stack<int> temp;

//     while (!myStack.empty())
//     {
//         temp.push(myStack.top());
//         myStack.pop();
//     }

//     myStack.push(top);

//     while (!temp.empty())
//     {
//         myStack.push(temp.top());
//         temp.pop();
//     }
// }

void insertAtBottom(stack<int> myStack, int element)
{
    if (myStack.empty())
    {
        myStack.push(element);
        return;
    }

    int current = myStack.top();
    myStack.pop();
    insertAtBottom(myStack, element);
    myStack.push(current);
}

void reverse(stack<int> myStack)
{
    if (myStack.empty())
    {
        return;
    }

    int top = myStack.top();
    myStack.pop();

    reverse(myStack);
    insertAtBottom(myStack, top);
}

int main()
{
    stack<int> myStack;

    for (int i = 1; i <= 10; i++)
    {
        myStack.push(i);
    }

    cout << endl;
    cout << myStack.size() << endl;

    cout << endl;
    reverse(myStack);

    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}