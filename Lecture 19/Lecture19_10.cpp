// Binary search STL and other utilities

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "Finding 3 " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    cout << "Upper bound " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a = 3;
    int b = 9;

    cout << "Max of a and b is " << max(a, b) << endl;

    cout << "Min of a and b is " << min(a, b) << endl;

    swap(a, b);
    cout << "a and b after swapping are " << a << " " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String after reversing is " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Based on Intro sort (Quick sort, heap sort, insertion sort)
    sort(v.begin(), v.end());
    cout << "After sorting we get " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}