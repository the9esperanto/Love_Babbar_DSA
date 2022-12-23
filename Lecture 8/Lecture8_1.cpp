#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Golu Molu's approach
    while (1)
    {
        int Danish = 2;
        switch (Danish)
        {
        case 10:
            cout << "Hello friends, my name is Shaikh, Mohammad Danish Shaikh.";
            cout << "I'm like pasta.";
            break;
        case 1:
            cout << "Agar pehla wala case print hota toh aapko sab padhne milta.";
        default:
            cout << "I live in Kasar wadavli.";
        }
        return 0;
    }

    // Love Babbar's approach.
    while (1)
    {
        int Danish = 1;
        switch (Danish)
        {
        case 10:
            cout << "Hello friends, my name is Shaikh, Mohammad Danish Shaikh.";
            cout << "I'm like pasta.";
            break;
        case 1:
            cout << "Agar pehla wala case print hota toh aapko sab padhne milta.";
            continue;
        default:
            cout << "I live in Kasar wadavli.";
        }
        exit(0);
    }

    return 0;
}

// Cannot use continue in switchcase.
// If we use continue in switch case then only the default will be executed and that statement will not be executed.
