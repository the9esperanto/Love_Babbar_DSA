#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a = 9;
    if (a == 9)
    {
        cout << "NINEY" << endl;
    }
    else if (a > 0)
    {
        cout << "POSITIVE" << endl;
    }
    else 
    {
        cout << "NEGATIVE" << endl;
    }

return 0;
}
// This code tells us that the compiler if satisfied by first condition does not look at the other conditions even if they are true.