#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a = 2;
    int b = a + 1;
    if ((a=3) == b)
    {
        cout << a << endl;
    }
    else
    {
        cout << (a + 1) << endl;
    }
    
return 0;
}
// This code tells us that we can reassign values to variables in the conditional statements as well.