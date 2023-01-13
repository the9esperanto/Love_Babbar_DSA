// Reverse words in a string
// But the execution stops when there is a space.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str;
    cin >> str;

    for (int i = 0, j = str.size() - 1; (i <= (str.size() / 2)) && (j > (str.size() / 2)); i++, j--)
    {
        std::swap(str[i], str[j]);
    }

    cout << str;
    return 0;
}