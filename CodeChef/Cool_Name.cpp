/* https://www.codechef.com/problems/CALPOWER?tab=statement


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	   
	   sort(s.begin() , s.end());
	   int power = 0 ;
	   for(int i = 0 ; i < s.size() ; i++)
	   {
         int ord = s[i] - 'a'+1;
         power+=(i+1)*ord;
	   }
	    
	    cout<<power<<endl;
	}

}
 */