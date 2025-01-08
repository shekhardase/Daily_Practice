// https://www.codechef.com/problems/SIMDISH

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector < string > vec(8);
//         for (int i = 0; i < 8; i++)
//         {
//             cin >> vec[i];
//         }

//         // for(int i = 0 ; i < 8 ; i++)
//         // {
//         //     cout<< vec[i]<< " ";
//         // }
//         map < string, int > mp;

//         for (auto i: vec)
//         {
//             mp[i]++;
//         }
        
//         int count = 0;
//         for (auto i: mp)
//         {
//             // cout << i.first << " " << i.second << endl;
//             if (i.second >=q 2)
//             {
//                 count++;
//             }
//         }
        
//         if(count>=2)
//         {
//            cout<<"similar"<<endl; 
//         }
//         else{
//             cout<<"dissimilar"<<endl;
//         }

//     }
// }