#include <iostream>
using namespace std;

// while solving recursion question just think of solving one case
// recursion will solve all cases

void ReachHome(int source, int destination)
{

    cout << "Source = " << source << endl;
    cout << "Destination = " << destination << endl;

    // base case
    if (source == destination)
    {
        cout << "Pohoch Gaya" << endl;
        return;
    }

    // recursive call
    // 1 step age jaenge toh age badhenge
    // recursive call mai source age badhega

    source++;
    ReachHome(source, destination); // recursive call
}

int main()
{

    int destination = 20;
    int source = 1;

    ReachHome(source, destination);
}