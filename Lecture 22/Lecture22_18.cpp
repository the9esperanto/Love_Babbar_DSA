// String Compression
// My approach

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::map<char, int> m;
    std::vector<char> chars;
    int size_of_vector;
    cout << "Enter the size of the character array." << endl;
    cin >> size_of_vector;
    cout << "Enter the elements to be stored in the character array." << endl;
    for (int i = 0; i < size_of_vector; i++)
    {
        char ch;
        cin >> ch;
        chars.push_back(ch);
    }

    cout << "The entered character array is " << endl;
    for (int i = 0; i < size_of_vector; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size_of_vector; i++)
    {
        char ch = chars[i];
        m[ch] = (m[ch])++;
        cout << m[ch] << endl;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}