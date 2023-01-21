// Reverse words in a string

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str;
    getline(cin, str);
    int r = 0, l = 0;
    while (r < str.length())
    {

        while (r < str.length() && str[r] != ' ')
        {
            r++;
        }
        int e = r - 1;
        int s = l;
        // cout << e << endl;
        // cout << s << endl;
        int mid = ((e + s) / 2);

        while ((e > mid) && (s <= mid))
        {
            std::swap(str[s], str[e]);
            e--;
            s++;
        }
        r = r + 1;
        l = r;
    }
    cout << str << endl;
    return 0;
}