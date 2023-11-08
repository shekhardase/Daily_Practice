#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i< n ; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i <  n-1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // swap(arr[i], arr[minIndex]);
        swap(arr[minIndex] , arr[i]);
    }

    cout<<"Sorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    // return 0;?
    
}


// find minimum element of array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i = 0 ; i< n ; i++)
//     {
//         cin>>arr[i];
//     }

//     int minIndex = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[minIndex])
//         {
//             minIndex = i;
//         }
//     }

//     cout<<"Minimum element is: "<<arr[minIndex]<<endl;
//     // return 0;?
    
// }



