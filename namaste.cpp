// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     cout<<"Namaste World";
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // // int main()
// // // {
// // //     char a;
// // //     cin >> a ;

// // //     if (  a >=  'a' &&  a <= 'z')
// // //     {
// // //         cout << "It is lower case "<<endl;
// // //     }

// // //     else if (a >=  'A' &&  a <= 'Z')
// // //     {
// // //         cout << "It is Upper case " << endl;
// // //     }

// // //     else if (a>=  '0' &&  a <= '9')
// // //     {
// // //         cout<<"it is numeric "<<endl;
// // //     }

// // // }

// // // int main ()
// // // {
// // //     int n;
// // //      cin >> n;
// // //      int i = 1;

// // //      while(i <=n)
// // //      {

// // //         cout<<i<<" "; i = i+1;
// // //      }
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin >>n;

// // //     int sum = 0;
// // //     int i = 1;

// // //     while(i<=n)
// // //     {
// // //         // cout<<sum<<endl;
// // //         sum= sum+i;
// // //         i = i+2;

// // //     }
// // //     cout<<sum<<endl;

// // //check number is prime or not

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     int i = 2;
// //     while(i<n)
// //     {
// //         if(n%i==0)
// //         {
// //             cout<<"Not Prime"<<endl;
// //             break;
// //         // }
// //         i = i+1;
// //     }
// //     if(i==n)
// //     {
// //         cout<<"Prime"<<endl;
// //     }
// // }

// #include <map>
// #include <iostream>
// using namespace std;

// int main()
// {
//     map<int, int> Hagu;

//     Hagu[1] = 12;
//     Hagu[2] = 14;
//     Hagu[3] = 14;
//     Hagu[4] = 15;
//     Hagu[5] = 16;

//     map<int, int>::iterator Lendi;
//     for (Lendi = Hagu.begin(); Lendi != Hagu.end(); Lendi++)
//     {
//         cout << (*Lendi).first << " " << (*Lendi).second << endl;
//     }

//     // Hagu.insert({{[6] = 23}, {[7] = 123}});
//     Hagu[23] = 23234;

//     cout << endl
//          << endl;

//     map<int, int>::iterator BhagBc;

//     for (BhagBc = Hagu.begin(); BhagBc != Hagu.end(); BhagBc++)
//     {
//         cout << (*BhagBc).first << " " << (*BhagBc).second << endl;
//     }
// }

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> MyMap;

    MyMap[1] = 12 ;
    MyMap[2] = 21;
    MyMap[3] = 13;
    MyMap[7] = 322;
    MyMap[4] = 32322;
    MyMap[5] = 1232;
    MyMap[6] = 12342;

    map<int , int>:: iterator iterate;
    for(iterate = MyMap.begin() ; iterate!= MyMap.end() ;iterate++)
    {
        // cout<<endl;
        cout<<(*iterate).first <<" " <<(*iterate).second<<endl;
        
    }

   MyMap.insert(make_pair(323 , 23));
   cout<<endl;

  for(iterate = MyMap.begin() ; iterate!= MyMap.end() ;iterate++)
    {
        // cout<<endl;
        cout<<(*iterate).first <<" " <<(*iterate).second<<endl;
        
    }
} 