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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(12);
    dq.push_front(12);
    dq.push_front(12);
    dq.push_back(134);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_front();
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    dq.pop_back();

    if (dq.empty())
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}