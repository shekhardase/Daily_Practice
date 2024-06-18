#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> difficulty = {2, 4, 6, 8, 10};
    vector<int> profit = {10, 20, 30, 40, 50};
    vector<int> worker = {4, 5, 6, 7};

    // Print the vectors
    cout << "Difficulty: ";
    for (int d : difficulty)
    {
        cout << d << " ";
    }
    cout << endl;

    cout << "Profit: ";
    for (int p : profit)
    {
        cout << p << " ";
    }
    cout << endl;

    cout << "Worker: ";
    for (int w : worker)
    {
        cout << w << " ";
    }
    cout << endl;


    int count = 0 ;
    for(int i = 0 ; i < worker.size() ; i++)
    {
        for(int j = 0 ; j < difficulty.size() -1 ; j++)
        {
            if( difficulty[j] < worker[i] < difficulty[j+1])
            {
                count = count + profit[i];
            }
        }
    }
    cout << count;

    return 0;
}