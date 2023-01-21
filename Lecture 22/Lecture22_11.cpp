// Return maximum occuring character in an input string

#include <iostream>
#include <iomanip>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

void transform_to_lower_case(std::string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 'a' - 'A';
        }
    }
}

char maximum_occuring_character(std::string &str)
{
    int highest_count = 0;
    int ans;
    for (int i = 0; i < str.length(); i)
    {
        int count = 0;
        char j = str[i];
        while (j == str[i])
        {
            count++;
            i++;
        }
        if (highest_count < count)
        {
            highest_count = count;
            ans = str[i - 1];
        }
    }
    return ans;
}

int main()
{
    std::string str;
    getline(cin, str);
    transform_to_lower_case(str);
    sort(str.begin(), str.end());
    char ans = maximum_occuring_character(str);
    cout << ans << endl;
    return 0;
}