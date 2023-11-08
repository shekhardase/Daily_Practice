
#include <iostream>
using namespace std;

int max_girls_impressed(int N, int K, int girls[])
{
    int max_girls = 0;

    // Calculate the initial sum of the first K kilometers
    for (int i = 0; i < K; i++)
    {
        max_girls += girls[i]; // 6
    }

    int current_sum = max_girls;

    // Slide the window along the track and find the maximum sum of K consecutive elements
    for (int i = K; i < N; i++)
    {
        current_sum += girls[i] - girls[i - K]; // Update the sum by adding the next kilometer and removing the last kilometer in the window
        max_girls = max(max_girls, current_sum);
    }

    return max_girls;
}

int main()
{
    int T; // Number of test cases
    cin >> T;

    while (T--)
    {
        int N, K; // Length of the track and the maximum distance he can run
        cin >> N >> K;

        int girls[N]; // Number of girls within each kilometer
        for (int i = 0; i < N; i++)
        {
            cin >> girls[i];
        }

        int result = max_girls_impressed(N, K, girls);
        cout << result << endl;
    }

    return 0;
}
