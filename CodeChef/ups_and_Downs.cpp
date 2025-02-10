// https://www.codechef.com/problems/ANUUND?tab=statement

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        cin>>a[i];
// 	    }
// 	    sort(a, a+n);
// 	    int r;
// 	    for(int i=1; i<n-1 ;i++)
// 	    {
// 	        r = a[i];
// 	        a[i] = a[i+1];
// 	        a[i+1] = r;
// 	        i++;
// 	    }
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        cout<<a[i]<<" ";
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }