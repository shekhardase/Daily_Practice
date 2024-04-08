#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> Mymap;
    Mymap["one"] = 1;
    Mymap["two"] = 2;
    Mymap["three"] = 3;
    cout << "Size of map: " << Mymap.size() << endl;

    map<string, int>::iterator iter;
  
    for (const auto &n : Mymap)
    {
        std::cout << n.first << " = " << n.second << "; ";
    }
}