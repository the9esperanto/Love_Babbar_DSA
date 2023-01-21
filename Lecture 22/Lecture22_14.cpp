#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str;
    cin.clear();
    cin.sync();
    getline(cin, str);

    std::string sub;
    cin.clear();
    cin.sync();
    getline(cin, sub);

    while (str.length() != 0 && str.find(sub) < str.length())
    {
        str.erase(str.find(sub), sub.length());
    }

    return 0;
}