#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    int a = 0 ; 

    cout<<0<<endl;

    for(long long i = 2 ; i <= n ; i++){
        a = a+i-2;
        long long fact = (long long)(i*i*i*i - i*i)/2;
        cout<<(long long)fact - 8*a<<endl;
    }
}
