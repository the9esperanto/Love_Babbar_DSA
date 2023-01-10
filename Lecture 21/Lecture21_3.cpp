// Sum of two arrays

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a[1000];
    int b[1000];
    std::vector<int> ans;
    int s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < s2; i++)
    {
        cin >> b[i];
    }
    int i = s1 - 1;
    int j = s2 - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = a[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    ans.reserve(ans.size());
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}