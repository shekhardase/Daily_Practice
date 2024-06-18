// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<string, int> niggacount;

//     niggacount["one"] = 1;
//     niggacount["two"] = 23;
//     niggacount["three"] = 12;
//     niggacount["four"] = 100;
//     niggacount["five"] = 0;

//     map<string, int>::iterator countnigga;

//     for (countnigga = niggacount.begin(); countnigga != niggacount.end(); countnigga++)
//     {
//         cout << (*countnigga).first << " " << (*countnigga).second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    ; // Example initialization of 'arr'

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto &it : mp)
    {
        cout << it.first << ' '
             << it.second << '\n';
    }
}
