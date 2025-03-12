// https://www.codechef.com/problems/SWAPCW?tab=statement

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string vec;
//         cin >> vec;
//         string newvec = vec;
//         sort(newvec.begin(), newvec.end());
//         int left = 0;
//         int right = n - 1;

//         if (vec == newvec)
//         {
//             cout << "YES" << endl;
//         }
//         else {
//             while (left < right)
//             {
//                 if (vec[left] > vec[right])
//                 {
//                     swap(vec[left], vec[right]);
//                 }
//                 left++;
//                 right--;
//             }
//             if (vec == newvec)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }

//         }


//     }
// }