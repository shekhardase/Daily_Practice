#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    int size = n/3;

    unordered_map <int , int> count;

    for(auto i: arr)
    {
        count[i]++;
    }

    vector<int> ans;

    for(auto i  : count)
    {
        if(i.second > size)
        {
            ans.push_back(i.first);
        }
    }

    for(auto element : ans)
    {
        cout<<element<<" ";
    }

    return 0 ; 

    
}