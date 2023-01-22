// Permutation in String

#include <iostream>
#include <iomanip>
// #include <utility>
// #include <algorithm>
// #include <math.h>
// #include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    std::string str1;
    cin.clear();
    cin.sync();
    getline(cin, str1);

    std::string str2;
    cin.clear();
    cin.sync();
    getline(cin, str2);

    // Character Count Array
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
    }

    // Traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = str1.length();
    int count2[26];
    while (i < windowSize && i<str2.length())
    {
        int index = str2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count, count2))
        cout << 1;

    while (i < str2.length())
    {
        char newChar = str2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = str2[i-windowSize];
        index = oldChar - 'a';
        count2[index]++;
        i++;

        if (checkEqual(count, count2))
        cout << 1;
    }

    return 0;
}
