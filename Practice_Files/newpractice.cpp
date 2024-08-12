// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     // ship capacity c total n people
// //     // calculate no of round ship has to make to deliver people

// //     int count = 0;
// //     int capacity = 30;
// //     int people = 75;

// //     while (people > 0)
// //     {
// //         people -= capacity;
// //         count++;
// //     }
// //     cout << count;
// //     return 0;
// // }

// // given string a and string b
// // find leftover letters in string a after removing all letters present in string b

// #include <iostream>
// using namespace std;

// int main()
// {
//     string a = "AABBCC";
//     string b = "AB";

//     string c = "";
//     for (int i = 0; i < a.size(); i++)
//     {
//         bool found = false;
//         for (int j = 0; j < b.size(); j++)
//         {
//             if (a[i] == b[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             c += a[i];
//         }
//     }
//     cout << c << endl;

//     return 0;
// }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     string a = "AABBCC";
// //     string b = "AB";

// //     string c = "";
// //     for (int i = 0; i < b.size(); i++)
// //     {
// //         for (int j = 0; j < a.size(); j++)
// //         {
// //             if (b[i] == a[i])
// //             {
// //                 a[i] = 1;
// //             }
// //         }
// //     }
// //     cout<<a<<endl;
// // }