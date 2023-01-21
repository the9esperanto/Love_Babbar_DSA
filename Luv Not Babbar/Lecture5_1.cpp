// Maps
// 1. Normal maps
// 2. Unordered maps
// 3. Multimaps

#include <iostream>
#include <iomanip>
#include <map>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Map is a data structure which stores the key-value pair.
    // The difference between map and the vectors of pair is that in map the first value of the pairs in map is unique. We can find a pair from its first value using at() operation. A map is a self organizing or associative container in STL, meaning you can look up something directly with a key efficiently ( O(logN) ), a vector<pair<>> requires that you search through the vector to find anything, which would be O(n) effort.

    // In normal map the values are stored in sorted manner according to the key.
    // While in unordered map the values are not stored in the sorted manner.
    // Normal maps are implemented by red-black trees.

    // Initialization of map
    std::map<int, std::string> m = {{1, "H"}, {2, "A"}, {3, "R"}, {4, "D"}, {5, "E"}, {6, "E"}, {7, "K"}};

    // Maps in memory are not stored in the contiguous memory locations.
    // So, we do ++ with iterators.

    m[9] = {"OK"};
    m.insert({8, "  "});
    // The time complexity of insertion depends on the key type.

    std::map<int, std::string>::iterator it;
    for (auto it : m)
    {
        cout << it.second << " ";
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " " << (*i).second;
        // Here, the complexity of accessing the element is also O(log(n))
    }
    cout << endl;

    for (auto i : m)
    {
        cout << i.second << " ";
    }

    cout << "The size of map is " << m.size() << endl;

    m[2]; // The time complexity of writing this itself if O(log(n)).
    // This will create an empty string at the 6th value.

    m.find(3);
    auto h = m.find(1);
    // This will return an iterator.
    // If the 1 is not there then it will return the iterator value of m.end().

    // m.erase() this will erase the value. It can take two inputs the iterator(which exists) and the key.
    m.erase(3);
    m.erase(h);

    for (auto i : m)
    {
        cout << i.second << " ";
    }

    // m.clear() This will clear the map
    m.clear();
    cout << "cleared" << endl;
    for (auto i : m)
    {
        cout << i.second << " " << i.first << " ";
    }

    // Map have unique keys

    return 0;
}