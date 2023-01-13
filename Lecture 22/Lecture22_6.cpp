// String is a type of a class.

#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // creating a string
    // std::string s;
    // std::string str = "Hardeek";

    // length of a string
    // cout << str.length() << endl;
    // cout << str << endl;
    // cin >> s;
    // cout << s.length() << endl;
    // cout << s << endl;

    // The character string stops the execution after the null character but the string skips the execution at null character and continues ahead.
    char arr[5] = {'1', '2', '\0', '4', '5'};
    std::string str;
    str.push_back('1');
    str.push_back('2');
    str.push_back('\0');
    str.push_back('4');
    str.push_back('5');
    cout << arr << endl;
    cout << endl;
    cout << str << endl;

    return 0;
}
