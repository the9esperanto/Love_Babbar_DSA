// Vector
// Contiguous memory block
// Arrays with dynamic size
// We can put only 10^5 ordered number of elements in the locally declared value. And 10^7 globally. This applies for array too.

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void printvec(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    std::vector<int> V;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        // Enters value at the end of the vector
        // Complexity of push_back is O(1).
        V.push_back(a);
        printvec(V);
    }
    std::vector<int> h(5);
    printvec(h);
    std::vector<int> m(5, 4);
    printvec(m);

    m.pop_back();

    // Copying vector
    std::vector<int> v3 = h; // Time Complexity O(n)
    printvec(v3);

    return 0;
}