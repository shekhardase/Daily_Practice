// https://www.codechef.com/problems/CK87MEDI

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
	    
// 	    int t ;
// 	    cin>>t;
// 	    while(t--)
// 	    {
// 	        int n , k ;
// 	        cin>>n>>k;
	        
// 	        vector<int>ans(n);
// 	        for(int i = 0 ; i < n ;i++)
// 	        {
// 	            cin>>ans[i];
// 	        }
	        
// 	        sort(ans.begin() , ans.end());
	        
// 	        int newstart = ans[n-1];
// 	       // cout<<newstart<<endl;
// 	        for(int i = n ; i < k+n ; i++)
// 	        {
// 	            newstart += i;
// 	            ans.push_back(newstart);
// 	        }
// 	       // cout<< ans[(n/2)]<<endl;
// 	       //for(int i = 0 ; i < n +k; i++)
// 	       //{
// 	       //    cout<<ans[i]<< " ";
// 	       //}
// 	       cout<<ans[(n+k)/2]<<endl;
	        
// 	    }

// }
