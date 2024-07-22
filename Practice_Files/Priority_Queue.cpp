#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 67, 8, 3, 3, 1};

    // priority_queue<int> pq;

    // for (int arr : a)
    // {
    //     pq.push(arr);
    // }

    // while (!pq.empty())
    // {
    //     int topElement = pq.top();
    //     pq.pop();
    //     // Process the top element
    //     cout << topElement << " ";
    // }
    // cout << endl;
    // priority_queue<int, vector<int>, greater<int>> reversePq;

    // for (int arr : a)
    // {
    //     reversePq.push(arr);
    // }

    // while (!reversePq.empty())
    // {
    //     int topElement = reversePq.top();
    //     reversePq.pop();
    //     // Process the top element
    //     cout << topElement << " ";
    // }

    priority_queue<string> pqueue;

    // add items to priority_queue
    pqueue.push("Geeks");
    pqueue.push("for");
    pqueue.push("Geeks");
    pqueue.push("C++");

    // get the size of queue
    int size = pqueue.size();
    cout << "Size of the queue: " << size;
    cout << endl;

    while (!pqueue.empty())
    {
        string topelement = pqueue.top();

        pqueue.pop();
        cout << topelement << " ";
    }

    return 0;
}