// Continue
// continue takes the pointer to the updation.

#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    { 

        // continue;
        break;
    }
    else if (i != 5)
    {
        cout << i << endl;
    }
}
return 0;
}