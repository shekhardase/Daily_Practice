// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // vector<int> v; // vector created name v

// // v.push_back(1); // adding 1 in empty vector v we created
// // v.push_back(3);
// // // cout << v;

// // vector<pair<int , int>> vec;

// // vector<int> v{4 , 100};     // = {100 , 100 ,100 ,100}
// //    //creating vector v having 4 places and has value 100

// // vector<int> v{5};  //= {empty spaces with 5 size}

// // intialization starts from 0

// // can traverse vector using iterator also

// // vector<int>::iterator it = v.begin(); // iterator points towards memory

// // it++; // if we print v.begin() we will print memory address not the element of vector
// // cout << *(it) << " ";
// // cout << endl;

// // // following syntaxes all do same functioning
// // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// // {
// //     cout << *(it) << " ";
// // }
// // cout << endl;

// // for (auto it = v.begin(); it != v.end(); it++) // this is auto begin to end
// // {
// //     cout << *(it) << " ";
// // }
// // cout << endl;

// // for (auto it : v) // this is for each loop
// // {
// //     cout << it << " ";
// // }

// //     int n;
// //     cin >> n; // You need to know how many elements you want to input

// //     vector<int> arr(n); // Create a vector with n elements

// //     for (auto& i : arr) // Use auto& to get a reference to the element in the array
// //     {
// //         cin >> i; // Read the input directly into the vector element
// //     }
// //     // cout << endl;

// //     for (auto i : arr) // This loop is correct - it prints out the elements of the vector
// //     {
// //         cout << i << " ";
// //     }
// //     cout << endl;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // { // dont use indexing in stack there are no indexes in stack
// //     // stack has only 3 functions
// //     stack<int> st;

// //     st.push(1); // 1
// //     st.push(2); // 2 1
// //     st.push(3); // 3 2 1
// //     st.push(4); // 4 3 2 1

// //     cout << st.top() << endl; // 4
// //     st.pop();                 // removes top element   // 3 2 1

// //     cout << st.size() << endl; // 3

// //     cout << st.empty() << endl; // empty stack

// //     stack<int> s1, s2;
// //     s1.swap(s2);
// // }

// // queue data structure

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     queue<int> q;
// //     q.push(1); // 1
// //     q.push(2); // 1 2
// //     q.push(3); // 1 2 3
// //     cout << q.back() << endl;
// //     cout << q.front() << endl;
// //     q.pop();
// //     cout << q.front() << endl;

// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     priority_queue<int> pq;

// //     pq.push(5);
// //     pq.push(2);
// //     pq.push(8);

// //     cout << pq.top() << endl;

// //     pq.pop();
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     set<int> st;
// //     st.insert(12);
// //     st.emplace(123);
// //     st.insert(1);

// //     auto it = st.find(12);

// //     auto it = st.find(1);

// //     st.erase(12);

// //     int cint = st.count(1);

// //     auto it = st.find(3);
// //     st.erase(it);
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //    //unordered set

// //    unordered_set<int> st ;

// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // maping

//     map<int, int> map;

//     // first int is key  // second int is values

//     // map is container which stores everything in aspect of key and values
// }

// ---------------------------------------------------------------------------------
// STL practice
// #include <iostream>
// #include <map>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> myArray = {1, 2, 2, 1, 1, 3};

//     // Create a map to store the count of each value
//     map<int, int> valueCountMap;

//     // Iterate through the array and update the count in the map
//     for (int value : myArray)
//     {
//         // If the key is not present, it will be automatically inserted with a count of 0
//         valueCountMap[value]++;
//     }

//     // Push the frequency of elements in another vector temp
//     vector<int> temp;
//     for (const auto &pair : valueCountMap)
//     {
//         temp.push_back(pair.second);
//     }

//     sort(temp.begin(), temp.end());

//     for(int i = 0 ; i< temp.size() ; i++)
//     {
//         if(temp[i] !=temp[i+1])
//         {
//             cout<<temp[i];
//         }
//     }

//     // // Display the count of each value
//     // for (const auto &pair : valueCountMap)
//     // {
//     //     cout << "Value: " << pair.first << ", Count: " << pair.second << endl;
//     // }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_map>

// std::vector<int> twoSum(std::vector<int> &nums, int target)
// {
//     std::unordered_map<int, int> numMap;
//     std::vector<int> result;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int complement = target - nums[i];
//         if (numMap.find(complement) != numMap.end())
//         {
//             result.push_back(numMap[complement]);
//             result.push_back(i);
//             break;
//         }
//         numMap[nums[i]] = i;
//     }

//     return result;
// }

// int main()
// {
//     std::vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     std::vector<int> indices = twoSum(nums, target);

//     std::cout << "Indices: " << indices[0] << ", " << indices[1] << std::endl;

//     return 0;
// }