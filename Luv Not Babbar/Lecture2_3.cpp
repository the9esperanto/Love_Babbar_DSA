// Vector of vector

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Vector of vector
    std::vector<std::vector<int>> h;

    // Input in Vector of vector
    // int N;
    // cin >> N;
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     std::vector<int> temp;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     h.push_back(temp);
    // }

    // for (int i = 0; i < h.size(); i++)
    // {
    //     for (int j = 0; j < h[i].size(); j++)
    //     {
    //         cout << h[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// Another way of taking input in Vector of vector.
// Pushing an empty vector.
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        h.push_back(std::vector<int> {});
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            h[i].push_back(x);
        }
    }

    for (int i = 0; i < h.size(); i++)
    {
        for (int j = 0; j < h[i].size(); j++)
        {
            cout << h[i][j] << " ";
        }
        cout << endl;
    }


    


    return 0;
}