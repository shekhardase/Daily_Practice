// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     queue<int> q;
//     q.push(11);
//     q.push(12);
//     q.push(13);
//     q.push(14);
//     q.push(15);

//     cout << q.size();
//     q.pop();
//     cout << endl;
//     cout << q.size() << endl;

//     cout << q.front() << endl;
//     cout << q.back() << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     deque<int> dq;
//     dq.push_front(12);
//     dq.push_front(12);
//     dq.push_front(12);
//     dq.push_back(134);

//     cout << dq.front() << endl;
//     cout << dq.back() << endl;

//     dq.pop_front();
//     cout << dq.front() << endl;
//     cout << dq.back() << endl;
//     dq.pop_back();

//     if (dq.empty())
//     {
//         cout << "The queue is empty" << endl;
//     }
//     else
//     {
//         cout << "Queue is not empty" << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
void addElements(queue<int> &q, int n)
{
    for (int i = 1; i <= n; i++)
    {
        int element;
        cin >> element;
        q.push(element);
    }
}

void print(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void copyQueueToArray(queue<int> &q, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = q.front();
        q.pop();
    }
}

queue<int> reverseWindow(queue<int> &q, int k)
{
    if (q.empty() || k <= 0 || k > q.size())
    {
        return q;
    }

    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    return q;
}

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    addElements(q, n);
    print(q);
    int arr[n];
    copyQueueToArray(q, arr, n);
    print(q);

    int k;
    cin >> k;
    reverseWindow(q, k);
    print(q);
}
