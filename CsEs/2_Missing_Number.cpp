// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n - 1);
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> nums[i];
//     }

//     sort(nums.begin() , nums.end());
//     int count = 1;
//     for(int i = 0 ; i < n ;i++)
//     {
//         if(count!=nums[i])
//         {
//             cout<<count;
//             break;
//         }
//         count++;
//     }

// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalSum = (long long)n * (n + 1) / 2; // Total sum of 1 to n
    long long givenSum = 0; // Sum of given numbers

    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        givenSum += num; // Accumulate the sum of given numbers
    }

    cout << totalSum - givenSum << endl; // Missing number
 
}
