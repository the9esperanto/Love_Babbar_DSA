// Palindrome with ignoring the symbols

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void input(std::vector<char> &array, int size)
{
    for (int i = 0; i < size; i++)
    {
        char a;
        cin >> a;
        array.push_back(a);
    }
}
void output(std::vector<char> &array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
char case_handler(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
    else
    {
        return ch;
    }
}
bool palindrome_checker(std::vector<char> &array, int size)
{
    int s = 0;
    int e = (size - 1);
    while (s < e)
    {
        // while (case_handler(array[s]) <= 'a' && case_handler(array[s]) >= 'z')
        // {
        //     s++;
        // }
        // while (case_handler(array[e]) <= 'a' && case_handler(array[e]) >= 'z')
        // {
        //     e--;
        // }

        while (!((case_handler(array[s]) >= 'a' && case_handler(array[s]) <= 'z') || (array[s] >= '0' && array[s] <= '9')))
        {
            s++;
        }
        while (!((case_handler(array[e]) >= 'a' && case_handler(array[e]) <= 'z') || (array[e] >= '0' && array[e] <= '9')))
        {
            e--;
        }

        if (case_handler(array[s]) != case_handler(array[e]))
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

int main()
{
    int size;
    cin >> size;
    std::vector<char> abmareh;
    input(abmareh, size);
    output(abmareh, size);

    int ans = palindrome_checker(abmareh, size);

    if (ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}