// https://www.codechef.com/problems/FIGBOT?tab=statement
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,x,y;
//         cin>>n>>x>>y;
//         string s;
//         cin>>s;
//         int x1=0,y1=0;
//         bool check = false;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='R') x1++;
//             else if(s[i]=='L') x1--;
//             else if(s[i]=='D') y1--;
//             else if(s[i]=='U') y1++;
//             // checking if it is possible to win bob 
//             if(abs(x1-x)+abs(y1-y)==i+1)
//             {
//              check = true;
//             }
//         }
//         int dist = abs(x1-x) + abs(y1-y);
//         if(dist==n) cout<<"Yes"<<endl;
//         else if(check) cout<<"Yes"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }