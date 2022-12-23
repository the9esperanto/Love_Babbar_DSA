#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    char ch;
    cin >> ch;
    
    if (int(ch) >= 48 && int(ch) <= 57)
    {
        cout << "This is numeric." << endl;
    }
    else if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << "This is Upper Case." <<  endl;
    }
    else if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << "This is Lower Case." << endl;
    }
return 0;
}
// This question makes us use the ASCII table.
