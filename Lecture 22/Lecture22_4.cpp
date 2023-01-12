// Check if palimdrome
// Here, uppercase and lowercase is the same.

// 32 difference between A and a in ASCII table. // Better approach make a function to convert from uppercase to lower case.
// My attempt

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void vector_input(std::vector<char> &ch, int size)
{
    for (int i = 0; i < size; i++)
    {
        char j;
        cin >> j;
        ch.push_back(j);
    }
}

void vector_output(std::vector<char> &ch, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
}

void case_handler(std::vector<char> &ch, int size)
{
    for (int i = 0; i < size; i++)
    {
        // check
        if (ch[i] >= 65 && ch[i] <= 91)
        {
            ch[i] = ch[i] + 32;
        }
    }
}

bool check_if_palindrome(std::vector<char> &ch, int size)
{
    int s = 0;
    int e = size - 1;
    bool ans = 0;
    while (s <= e)
    {
        if (ch[s] == ch[e])
        {
            ans = 1;
        }
        else
        {
            ans = 0;
            break;
        }
        s++;
        e--;
    }
    return ans;
}

int main()
{
    std::vector<char> ch;
    cout << "Enter the size of the array." << endl;
    int size;
    cin >> size;
    cout << "Enter the " << size << " elements to be stored in the array." << endl;
    vector_input(ch, size);
    cout << "The entered array is as follows." << endl;
    vector_output(ch, size);

    case_handler(ch, size);

    vector_output(ch, size);

    int ans = check_if_palindrome(ch, size);
    if (ans == 0)
    {
        cout << "The entered character array is not a palindrome. " << endl;
    }
    else
    {
        cout << "The character entered array is a palindrome." << endl;
    }

    return 0;
}