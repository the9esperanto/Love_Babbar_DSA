// character array
// strings - one dimensional character array.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int getLenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count += 1;
    }
    return count;
}

void reverse(char ch[], int length)
{

    // for (int i = 0, j = length - 1; i <= length / 2 && j >=  length / 2; i++, j--)
    // {
    //     std::swap(ch[i],ch[j]);
    // }

    // new way of writing a loop
    int s = 0;
    int end = length - 1;
    while (s < end)
    {
        std::swap(ch[s++], ch[end--]);
    }
}

int main()
{
    // Initializing a character
    // char h = 'a';

    // Initializing a character array
    // char arr[10];

    // Taking input for a character array
    // cin >> arr;

    // Printing a character array
    // cout << arr << endl;

    // When we make a character array and store something in it till the position less than the the last position of array it stores the null character '\0' at the next position. Null character is used as a terminator. It will be printed till null character only.
    // While giving input, when we give space the input stops i.e., the cin function stops the execution when it gets space, tab, new line character i.e., enter.
    // If we put a null character at a specific position then the execution stops at that position
    //  arr[2] = '\0';
    //  cout << arr << endl;
    // Initializing a string
    // std::string s[1];
    // // Length of a string
    // int count = 0;
    // for(int i = 0; ; i++)
    // {
    //     if(arr[i] = '/0')
    //     {
    //         break;
    //     }
    //     count += 1;
    // }
    // char array[6] = {'H', 'E', 'R', 'A', 'M', 'B'};
    // cout << array[1];
    // cout << array[2];
    // cout << array[6];
    // char array1[8];
    // cin >> array1;

    // cout << getLenght(array1) << endl;
    // cout << getLenght(array) << endl;

    // Reverse a string
    char ch[10];
    cin >> ch;
    int length = getLenght(ch);
    cout << "Length is " << length << endl;
    cout << "Before reversing " << ch << endl;
    reverse(ch, length);
    cout << "After reversing " << ch << endl;

    return 0;
}