#include <iostream>
using namespace std;
int main()
{
    int n;
    int num[n];
    cin >> n;
    // int key ;
    // cout<<"Enter the key"<<endl;
    // cin>>key;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = num[i] + sum;
    }

    cout << sum << endl;
}