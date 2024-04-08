// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int gcd(int a, int b)
// // // {
// // //     if (a == 0)
// // //     {
// // //         return b;
// // //     }

// // //     if (b == 0)
// // //     {
// // //         return a;
// // //     }

// // //     while (a != b)
// // //     {
// // //         if (a > b)
// // //         {
// // //             a = a - b;
// // //         }
// // //         else
// // //         {
// // //             b = b - a;
// // //         }
// // //     }
// // //     return a;
// // // }

// // // int main()
// // // {
// // //     int a, b;
// // //     cout << "Enter the two numbers: " << endl;
// // //     cin >> a >> b;

// // //     int ans = gcd(a, b);

// // //     cout << ans << endl;
// // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main()
// // // {
// // //     vector<int> nums{-3,3,3,90};
// // //     int n = nums.size();
// // //     int count = 0;

// // //     sort(nums.begin(), nums.end());

// // //     for (int i = 1; i < n - 1; i++)
// // //     {
// // //         if (nums[i] > nums[0] && nums[i] < nums[n - 1])
// // //         {
// // //             count++;
// // //         }
// // //     }
// // //     cout << count;
// // // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     int digits[10];
// //     int count = 0;
// //     int store = 0;

// //     if (n == 0) {
// //         digits[count] = 0;
// //         count++;
// //     }

// //     while (n > 0) {
// //         digits[count] = n % 10;
// //         n = n / 10;
// //         count++;
// //     }

// //     if (count == 1) {
// //         store = digits[0];
// //     } else {
// //         for (int i = count - 1; i >= 0; i--) {
// //             if (i % 2 == 0) {
// //                 store = store + digits[i];
// //             } else {
// //                 store = store - digits[i];
// //             }
// //         }
// //     }

// //     cout << store << endl;

// //     return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" "<<endl;
//     }

//     int store = 0 ;

//     for (int i = 0; i < n; i++)
//     {
//         if(i%2 == 0)
//         {
//             store = store + arr[i];
//         }
//         else{
//             store = store -arr[i];        }
//     }

//     cout<<store;
    
    
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//      vector<int> v {1 , 0 , 0 , 0 };
//      int n = v.size();
//         int ans=0;
//         //storing n in vector v
//         while(n>0)
//         {
//             v.push_back(n%10);
//             n=n/10;
//         }
//         for(int i = 0 ; i< v.size() ; i++)
//         {
//             cout<<v[i]<<endl;
//         }
// }