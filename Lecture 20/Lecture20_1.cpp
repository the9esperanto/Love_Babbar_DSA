// Reverse The Array

#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

// auto
// belongs to
// iterator

// Using swap function
// int main()
// {
//     std::array<int, 6> a;
//     for (int i = 0; i < 6; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0, j = 5; i <= 2 && j > 2; i++, j--)
//     {
//         std::swap(a[i], a[j]);
//     }
//     for (int i : a)
//     {
//         cout << i << " ";
//     }

//     for (auto i : a)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// Using a third variable
// int main()
// {
//     std::array<int, 6> b;
//     for (int i = 0; i < 6; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0, j = (b.size() - 1); i <= (b.size() / 2) && j >= (b.size() / 2); i++, j--)
//     {
//         int temp;
//         temp = b[i];
//         b[i] = b[j];
//         b[j] = temp;
//     }
//     for (int i : b)
//     {
//         cout << i << " ";
//     }
// }

// Difference between sizeof() and array.size()

/*
Sizeof(array) gives you the number of bytes array occupies and it does not give you the number of elements in the array. But you divide it with sizeof(element). Which will give you the number of elements in the array.

array.size() is an STL utility which gives you the number of elements in the array.
*/

// Using sizeof() and
// Using the reverse funtion from STL
// int main()
// {
// array<int, 4> c;
// int c[4];
// int c[] = {1,2,3,4};
// c[0] = 1;
// c[1] = 2;
// c[2] = 3;
// c[3] = 4;
// for (int i = 0; i < 4; i++)
// {
//     cin >> c[i];
// }
// int size = sizeof(c) / sizeof(c[0]);
//     reverse(c, c + 4);
//     for (int i = 0; i < 4; i++)
//     {
//         cout << c[i] << " ";
//     }
// }

// Love Babbars approach using vectors
// vector<int> reversing(vector<int> v)
// {
//     int s = 0;
//     int end = v.size() - 1;
//     while (s <= end)
//     {
//         swap(v[s], v[end]);
//         s++;
//         end--;
//     }
//     return v;
// }
// void print(vector<int> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(90);
//     v.push_back(89);
//     v.push_back(88);
//     v.push_back(87);
//     v.push_back(86);
//     v.push_back(85);
//     reverse(v.begin(), v.end());
//     vector<int> ans = reversing(v);
//     print(ans);
// }

int main()
{
    vector<int> v;
    v.push_back(90);
    v.push_back(89);
    v.push_back(88);
    v.push_back(87);
    v.push_back(86);
    v.push_back(85);

    cout << *v.begin();
}
