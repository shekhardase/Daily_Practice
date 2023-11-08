#include <iostream>
using namespace std;
int main()
{

    // pointer creation
    int value = 5;
    int *ptr = &value; // kis type ka data hai
    // kitna byte ko consider karna hai

    int i = 5; // ek block create hua jisme value hia 5

    int *ptr1 = &i;
    // ptr block crete hua jo point kr rha i ko
    // address store hia ptr mai


    //double pointer creation

    int * * ptr2 = & ptr;
    cout<<ptr1 << " " << ptr2 << endl;
}