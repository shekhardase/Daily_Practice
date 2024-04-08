#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> niggacount;

    niggacount["one"] = 1;
    niggacount["two"] = 23;
    niggacount["three"] = 12;
    niggacount["four"] = 100;
    niggacount["five"] = 0;

    map<string, int>::iterator countnigga;

    for (countnigga = niggacount.begin(); countnigga != niggacount.end(); countnigga++)
    {
        cout << (*countnigga).first << " " << (*countnigga).second << endl;
    }

    return 0;
}


