// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     unordered_set<int> st;

//     st.insert(1);
//     st.insert(2);
//     st.insert(3);
//     st.insert(4);
//     st.insert(5);
//     st.insert(5);
//     cout << st.size() << endl;
//     for (auto it = st.begin(); it != st.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     // cout << endl;
//     // cout << st.size() << endl;
//     // // return 0;

//     // int key = 10;
//     // st.erase(key);
//     // for (const auto &elem : st)
//     // {
//     //     cout << elem << " ";
//     // }
//     // cout << endl;
//     // int key2 = 5;
//     // st.erase(key2);
//     // for (auto it = st.begin(); it != st.end(); it++)
//     // {
//     //     cout << *it << " ";
//     // }

//     // cout << endl;

//     // for (auto element : st)
//     // {
//     //     cout << element << " ";
//     // }
//     // cout << endl;
//     cout<<endl;
//     int key = 5;
//     if (st.find(key) == st.end())
//     {
//         cout << "Key Not found";
//     }
//     else
//     {
//         cout << "Key Found";
//     }
//     cout<<endl;
//   st.erase(key);
//     if (st.find(key) == st.end())
//     {
//         cout << "Key Not found";
//     }
//     else
//     {
//         cout << "Key Found";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> st;

    st.insert("This");
    st.insert("Is");
    st.insert("Set");
    st.insert("Of");
    st.insert("String");

    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    st.insert("this");
    cout << endl;
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    if (st.find("this") != st.end())
    {
        cout << "key Found " << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}