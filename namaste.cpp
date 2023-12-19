// // // // // // // // // // #include<iostream>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     cout<<"Namaste World";
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     char a;
r// // // // // // // // // //     cin >> a ;

// // // // // // // // // //     if (  a >=  'a' &&  a <= 'z')
// // // // // // // // // //     {
// // // // // // // // // //         cout << "It is lower case "<<endl;
// // // // // // // // // //     }

// // // // // // // // // //     else if (a >=  'A' &&  a <= 'Z')
// // // // // // // // // //     {
// // // // // // // // // //         cout << "It is Upper case " << endl;
// // // // // // // // // //     }

// // // // // // // // // //     else if (a>=  '0' &&  a <= '9')
// // // // // // // // // //     {
// // // // // // // // // //         cout<<"it is numeric "<<endl;
// // // // // // // // // //     }

// // // // // // // // // // }

// // // // // // // // // // int main ()
// // // // // // // // // // {
// // // // // // // // // //     int n;
// // // // // // // // // //      cin >> n;
// // // // // // // // // //      int i = 1;

// // // // // // // // // //      while(i <=n)
// // // // // // // // // //      {

// // // // // // // // // //         cout<<i<<" "; i = i+1;
// // // // // // // // // //      }
// // // // // // // // // // }

// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     int n;
// // // // // // // // // //     cin >>n;

// // // // // // // // // //     int sum = 0;
// // // // // // // // // //     int i = 1;

// // // // // // // // // //     while(i<=n)
// // // // // // // // // //     {
// // // // // // // // // //         // cout<<sum<<endl;
// // // // // // // // // //         sum= sum+i;
// // // // // // // // // //         i = i+2;

// // // // // // // // // //     }
// // // // // // // // // //     cout<<sum<<endl;

// // // // // // // // // //check number is prime or not

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int n;
// // // // // // // // //     cin >> n;

// // // // // // // // //     int i = 2;
// // // // // // // // //     while(i<n)
// // // // // // // // //     {
// // // // // // // // //         if(n%i==0)
// // // // // // // // //         {
// // // // // // // // //             cout<<"Not Prime"<<endl;
// // // // // // // // //             break;
// // // // // // // // //         // }
// // // // // // // // //         i = i+1;
// // // // // // // // //     }
// // // // // // // // //     if(i==n)
// // // // // // // // //     {
// // // // // // // // //         cout<<"Prime"<<endl;
// // // // // // // // //     }
// // // // // // // // // }

// // // // // // // // #include <map>
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     map<int, int> Hagu;

// // // // // // // //     Hagu[1] = 12;
// // // // // // // //     Hagu[2] = 14;
// // // // // // // //     Hagu[3] = 14;
// // // // // // // //     Hagu[4] = 15;
// // // // // // // //     Hagu[5] = 16;

// // // // // // // //     map<int, int>::iterator Lendi;
// // // // // // // //     for (Lendi = Hagu.begin(); Lendi != Hagu.end(); Lendi++)
// // // // // // // //     {
// // // // // // // //         cout << (*Lendi).first << " " << (*Lendi).second << endl;
// // // // // // // //     }

// // // // // // // //     // Hagu.insert({{[6] = 23}, {[7] = 123}});
// // // // // // // //     Hagu[23] = 23234;

// // // // // // // //     cout << endl
// // // // // // // //          << endl;

// // // // // // // //     map<int, int>::iterator BhagBc;

// // // // // // // //     for (BhagBc = Hagu.begin(); BhagBc != Hagu.end(); BhagBc++)
// // // // // // // //     {
// // // // // // // //         cout << (*BhagBc).first << " " << (*BhagBc).second << endl;
// // // // // // // //     }
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // #include <map>
// // // // // // // // using namespace std;

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     map<int, int> MyMap;

// // // // // // // //     MyMap[1] = 12 ;
// // // // // // // //     MyMap[2] = 21;
// // // // // // // //     MyMap[3] = 13;
// // // // // // // //     MyMap[7] = 322;
// // // // // // // //     MyMap[4] = 32322;
// // // // // // // //     MyMap[5] = 1232;
// // // // // // // //     MyMap[6] = 12342;

// // // // // // // //     map<int , int>:: iterator iterate;
// // // // // // // //     for(iterate = MyMap.begin() ; iterate!= MyMap.end() ;iterate++)
// // // // // // // //     {
// // // // // // // //         // cout<<endl;
// // // // // // // //         cout<<(*iterate).first <<" " <<(*iterate).second<<endl;

// // // // // // // //     }

// // // // // // // //    MyMap.insert(make_pair(323 , 23));
// // // // // // // //    cout<<endl;

// // // // // // // //   for(iterate = MyMap.begin() ; iterate!= MyMap.end() ;iterate++)
// // // // // // // //     {
// // // // // // // //         // cout<<endl;
// // // // // // // //         cout<<(*iterate).first <<" " <<(*iterate).second<<endl;

// // // // // // // //     }
// // // // // // // // }

// // // // // // // /*------18/01/2023------*/
// // // // // // // #include <bits/stdc++.h> //jai ganesh
// // // // // // // using namespace std;
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int t;
// // // // // // //     cin >> t;
// // // // // // //     while (t > 0)
// // // // // // //     {
// // // // // // //         int n;
// // // // // // //         cin >> n;
// // // // // // //         int arr[n];
// // // // // // //         int count = 0;
// // // // // // //         int flag = 0;
// // // // // // //         for (int i = 0; i < n; i++)
// // // // // // //         {
// // // // // // //             cin >> arr[i];

// // // // // // //             if (arr[i] == 0)
// // // // // // //             {
// // // // // // //                 flag = 1;
// // // // // // //             }

// // // // // // //             if (arr[i] < 0)
// // // // // // //             {
// // // // // // //                 count++;
// // // // // // //             }
// // // // // // //         }

// // // // // // //         if (count % 2 == 0 || flag != 0)
// // // // // // //             cout << "0" << endl;

// // // // // // //         else
// // // // // // //             cout << (count % 2) << endl;

// // // // // // //         t--;
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     int n;
// // // // // //     cin >> n;
// // // // // //     int arr[n];
// // // // // //     int store = 0;
// // // // // //     // int end = n;
// // // // // //     int k;
// // // // // //     cout << "enter k";
// // // // // //     cin >> k;
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         cin >> arr[i];
// // // // // //     }

// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         store = arr[0];

// // // // // //         if (store < arr[i])
// // // // // //         {
// // // // // //             store = arr[i];
// // // // // //         }
// // // // // //     }

// // // // // //     cout << store << endl;

// // // // // //     // end = arr[k];

// // // // // //     for (int i = store; i > k; i--)
// // // // // //     {
// // // // // //         store = arr[i];
// // // // // //     }

// // // // // //     cout << store << endl;
// // // // // // }

// // // // // // #include <algorithm>
// // // // // // #include <iostream>
// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     int n;
// // // // // //     cin >> n;
// // // // // //     vector<int> arr(n);
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         cin >> arr[i];
// // // // // //     }

// // // // // //     int min = *min_element(arr.begin(), arr.end());

// // // // // //     int max = *max_element(arr.begin(), arr.end());

// // // // // //     // for(auto i : )

// // // // // //     // cout << min << " " << max << endl;
// // // // // //     // for (auto element : arr)
// // // // // //     // {
// // // // // //     //     cout << element << " ";
// // // // // //     // }
// // // // // //     // cout << endl;

// // // // // //     // int IndexMaxStart = 0;
// // // // // //     int IndexMaxStart = -1;
// // // // // //     int IndexMaxEnd = -1;

// // // // // //     int IndexMinStart = -1;
// // // // // //     int IndexMinEnd = -1;

// // // // // //     int delMin = 0;
// // // // // //     int delMax = 0;
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         if (arr[i] == max)
// // // // // //         {
// // // // // //             IndexMaxStart = std::abs(i - 0);
// // // // // //             break;
// // // // // //         }
// // // // // //     }
// // // // // //     // cout << IndexMaxStart << " ";

// // // // // //     for (int i = n - 1; i >= 0; i--)
// // // // // //     {
// // // // // //         if (arr[i] == max)
// // // // // //         {

// // // // // //             IndexMaxEnd = std::abs(i - (n - 1));
// // // // // //             break;
// // // // // //         }
// // // // // //     }

// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         if (arr[i] == min)
// // // // // //         {
// // // // // //             IndexMinStart = std::abs(i - (n - 1));
// // // // // //             break;
// // // // // //         }
// // // // // //     }

// // // // // //     // cout << IndexMinStart << " ";

// // // // // //     for (int i = n - 1; i >= 0; i--)
// // // // // //     {
// // // // // //         if (arr[i] == min)
// // // // // //         {
// // // // // //             IndexMinEnd++;
// // // // // //         }
// // // // // //     }

// // // // // //     if (IndexMaxEnd == 0)
// // // // // //     {
// // // // // //         IndexMaxEnd = 1;
// // // // // //     }
// // // // // //     if (IndexMinEnd == 0)
// // // // // //     {
// // // // // //         IndexMinEnd = 1;
// // // // // //     }
// // // // // //     if (IndexMinStart == 0)
// // // // // //     {
// // // // // //         IndexMinStart = 1;
// // // // // //     }
// // // // // //     if (IndexMaxStart == 0)
// // // // // //     {
// // // // // //         IndexMaxStart = 1;
// // // // // //     }

// // // // // //     if (IndexMaxEnd > IndexMaxStart)
// // // // // //     {
// // // // // //         delMax = IndexMaxStart;
// // // // // //     }

// // // // // //     if (IndexMaxEnd < IndexMaxStart)
// // // // // //     {
// // // // // //         delMax = IndexMaxEnd;
// // // // // //     }

// // // // // //     if (IndexMinEnd > IndexMaxStart)
// // // // // //     {
// // // // // //         delMin = IndexMinStart;
// // // // // //     }

// // // // // //     if (IndexMinEnd < IndexMinStart)
// // // // // //     {
// // // // // //         delMin = IndexMinEnd;
// // // // // //     }

// // // // // //     cout << delMin + delMax;
// // // // // // }

// // // // // #include <algorithm>
// // // // // #include <iostream>
// // // // // #include <vector>

// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int n;
// // // // //     cin >> n;
// // // // //     vector<int> arr(n);

// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         cin >> arr[i];
// // // // //     }

// // // // //     int minValue = *min_element(arr.begin(), arr.end());
// // // // //     int maxValue = *max_element(arr.begin(), arr.end());

// // // // //     int indexMinStart = -1;
// // // // //     int indexMinEnd = -1;
// // // // //     int indexMaxStart = -1;
// // // // //     int indexMaxEnd = -1;

// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         if (arr[i] == minValue)
// // // // //         {
// // // // //             indexMinStart = i; // Fixed calculation of IndexMinStart
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     for (int i = n - 1; i >= 0; i--)
// // // // //     {
// // // // //         if (arr[i] == minValue)
// // // // //         {
// // // // //             indexMinEnd = i;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         if (arr[i] == maxValue)
// // // // //         {
// // // // //             indexMaxStart = i;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     for (int i = n - 1; i >= 0; i--)
// // // // //     {
// // // // //         if (arr[i] == maxValue)
// // // // //         {
// // // // //             indexMaxEnd = i;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     int delMin = max(indexMinStart, n - 1 - indexMinEnd); // Fixed calculation of delMin
// // // // //     int delMax = max(indexMaxStart, n - 1 - indexMaxEnd); // Fixed calculation of delMax

// // // // //     cout << delMin + delMax << endl;

// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <algorithm>

// // // // using namespace std;

// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin >> n;
// // // //     vector<int> arr(n);

// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         cin >> arr[i];
// // // //     }

// // // //     int minValue = *min_element(arr.begin(), arr.end());
// // // //     int maxValue = *max_element(arr.begin(), arr.end());

// // // //     int indexMin = -1;
// // // //     int indexMax = -1;

// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         if (arr[i] == minValue)
// // // //         {
// // // //             indexMin = i;
// // // //             break;
// // // //         }
// // // //     }

// // // //     for (int i = n - 1; i >= 0; i--)
// // // //     {
// // // //         if (arr[i] == maxValue)
// // // //         {
// // // //             indexMax = i;
// // // //             break;
// // // //         }
// // // //     }

// // // //     // Calculate the minimum number of deletions
// // // //     int result = max(indexMin, n - 1 - indexMax) + max(indexMax, n - 1 - indexMin);

// // // //     cout << result << endl;

// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>

// // // using namespace std;

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     vector<int> arr(n);

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //     }

// // //     int minValue = *min_element(arr.begin(), arr.end());
// // //     int maxValue = *max_element(arr.begin(), arr.end());

// // //     int indexMin = -1;
// // //     int indexMax = -1;

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         if (arr[i] == minValue)
// // //         {
// // //             indexMin = i;
// // //             break;
// // //         }
// // //     }

// // //     for (int i = n - 1; i >= 0; i--)
// // //     {
// // //         if (arr[i] == maxValue)
// // //         {
// // //             indexMax = i;
// // //             break;
// // //         }
// // //     }

// // //     // Calculate the minimum number of deletions
// // //     int result = max(indexMin, n - 1 - indexMin) + max(indexMax, n - 1 - indexMax);

// // //     cout << result << endl;

// // //     return 0;
// // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>

// // // using namespace std;

// // // int minDeletions(vector<int> &nums)
// // // {
// // //     int n = nums.size();
// // //     int minValue = *min_element(nums.begin(), nums.end());
// // //     int maxValue = *max_element(nums.begin(), nums.end());

// // //     int indexMin = -1;
// // //     int indexMax = -1;

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         if (nums[i] == minValue)
// // //         {
// // //             indexMin = i;
// // //             break;
// // //         }
// // //     }

// // //     for (int i = n - 1; i >= 0; i--)
// // //     {
// // //         if (nums[i] == maxValue)
// // //         {
// // //             indexMax = i;
// // //             break;
// // //         }
// // //     }

// // //     int frontDeletions = max(indexMin, n - 1 - indexMax);
// // //     int backDeletions = max(indexMax, n - 1 - indexMin);

// // //     return min(frontDeletions, backDeletions);
// // // }

// // // int main()
// // // {
// // //     // Example 1
// // //     vector<int> nums1 = {2, 10, 7, 5, 4, 1, 8, 6};
// // //     cout << "Example 1: " << minDeletions(nums1) << endl;

// // //     // Example 2
// // //     vector<int> nums2 = {0, -4, 19, 1, 8, -2, -3, 5};
// // //     cout << "Example 2: " << minDeletions(nums2) << endl;

// // //     // Example 3
// // //     vector<int> nums3 = {101};
// // //     cout << "Example 3: " << minDeletions(nums3) << endl;

// // //     return 0;
// // // }
// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // int minDeletions(vector<int>& nums) {
// //     int n = nums.size();

// //     // Find the indices of the minimum and maximum elements
// //     int minIndex = distance(nums.begin(), min_element(nums.begin(), nums.end()));
// //     int maxIndex = distance(nums.begin(), max_element(nums.begin(), nums.end()));

// //     // Find the length of the longest subarray including both minimum and maximum elements
// //     int subarrayLength = max(maxIndex, n - 1 - minIndex) - min(minIndex, n - 1 - maxIndex) + 1;

// //     // Calculate the number of deletions required
// //     int deletions = n - subarrayLength;

// //     return deletions;
// // }

// // int main() {
// //     // Example 1
// //     vector<int> nums1 = {2, 10, 7, 5, 4, 1, 8, 6};
// //     cout << "Example 1: " << minDeletions(nums1) << endl;

// //     // Example 2
// //     vector<int> nums2 = {0, -4, 19, 1, 8, -2, -3, 5};
// //     cout << "Example 2: " << minDeletions(nums2) << endl;

// //     // Example 3
// //     vector<int> nums3 = {101};
// //     cout << "Example 3: " << minDeletions(nums3) << endl;

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minDeletions(vector<int> &nums)
// {
//     int n = nums.size();

//     // Find the indices of the minimum and maximum elements
//     int minIndex = distance(nums.begin(), min_element(nums.begin(), nums.end()));
//     int maxIndex = distance(nums.begin(), max_element(nums.begin(), nums.end()));

//     // Calculate the distances from the start and end
//     int distanceFromStart = min(minIndex, n - 1 - minIndex);
//     int distanceFromEnd = min(maxIndex, n - 1 - maxIndex);

//     // Calculate the number of deletions required
//     int deletions = distanceFromStart + distanceFromEnd;

//     return deletions;
// }

// int main()
// {
//     // Example 1
//     vector<int> nums1 = {2, 10, 7, 5, 4, 1, 8, 6};
//     cout << "Example 1: " << minDeletions(nums1) << endl;

//     // Example 2
//     vector<int> nums2 = {0, -4, 19, 1, 8, -2, -3, 5};
//     cout << "Example 2: " << minDeletions(nums2) << endl;

//     // Example 3
//     vector<int> nums3 = {101};
//     cout << "Example 3: " << minDeletions(nums3) << endl;

//     return 0;
// }
