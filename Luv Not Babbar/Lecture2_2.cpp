// Array of vectors

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    std::vector<int> v[n];
    // This is an array of vectors.
    // This means there is an array in which there are 10 vectors.
    // This does not mean a vector of size 10 this mean there are 10 vectors of size 0.

    // We cannot have vector of arrays. That is we cannot store arrays in vector. Normal arrays cannot be stored in anything. The type of the elements to be stored in a container (called the container's value type) must be both copy constructible and assignable. Normal arrays are neither. But stl arrays can be.

    // Taking input of all the vectors

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {

            int h;
            cin >> h;
            v[i].push_back(h);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}