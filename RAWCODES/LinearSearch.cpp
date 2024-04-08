#include <iostream>
using namespace std;
int main()
{
    int n;
    int num[n];
    int key;
    cout << "Enter the key" << endl;
    cin >> key;
    cout << "Enter the size of array " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (key == num[i])
        {
            cout << "KEY Found at index " << num[i] << endl;
            // break;
        }
        else
        {
            cout << "Key is absent" << endl;
        }
    }
}
