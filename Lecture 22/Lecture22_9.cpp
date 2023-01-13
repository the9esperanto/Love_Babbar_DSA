// Reverse a string with spaces kept intact.
// Getline reads the input from user untill the first newline character, which occur when the user presses enter.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Taking input with spaces in string
    std::string str;
    getline(cin, str);
    cout << str << endl;

    // Taking input with spaces in char array
    // char array[10];
    // cin.getline(array,sizeof(array));
    // cout << array << endl;
    cout << "The length of string is " << str.length() << endl;

    for (int i = 0, j = (str.length() - 1); i <= ((str.length()) / 2) && (j > (str.length()) / 2); i++, j--)
    {
        std::swap(str[i], str[j]);
    }
    cout << str << endl;

    return 0;
}
