
#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Create a map of strings to integers
    map<string, int> Mymap;

    // Insert some values into the map
    Mymap["one"] = 1;
    Mymap["two"] = 2;
    Mymap["three"] = 3;

    // Print the size of the map
    cout << "Size of map: " << Mymap.size() << std::endl;

    // inserting a pair in map by make_pair()
    Mymap.insert(make_pair("four", 4));

    cout << "Size of map: " << Mymap.size() << std::endl;
    
   //create iterator to traverse
    map<string, int>::iterator it;
    for (it = Mymap.begin(); it != Mymap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}