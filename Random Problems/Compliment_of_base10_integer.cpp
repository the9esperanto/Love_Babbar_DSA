// Compliment of base 10 integer.
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

void replace_char(char *string, char replace, char naya);

int main()
{
    int n;
    cin >> n;
    int answer = 0;
    while (n != 0)
    {
        int r = n % 2;
        if (r == 0)
        {
            answer = answer + 2;
            if (n != 1)
            {
                answer = answer * 10;
            }
        }
        else
        {
            answer = answer + 1;
            if (n != 1)
            {
                answer = answer * 10;
            }
        }

        n = n / 2;
    }

    cout << answer << endl;
    // #############################

    string Hardeek = to_string(answer);
    char *p = &(Hardeek[0]);

    replace_char(p, '2', '0');

    cout << Hardeek << endl;

    return 0;
}
void replace_char(char *string, char replace, char naya)
{
    int slen = strlen(string);
    for (int i = 0; i < slen; i++)
    {
        if (string[i] == replace)
        {
            string[i] = naya;
        }
    }
}