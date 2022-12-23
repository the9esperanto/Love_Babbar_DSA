#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    unsigned int input_from_user;
    cin >> input_from_user;

    // ##################################################
    // First solution is to check the last bit and the right shift. right shift 32 times as int is 32 bytes. Or till the number becomes 0 i.e., all the digits are 0.
    int count = 0;
    while (input_from_user != 0)
    {
        if (input_from_user & 1 == 1)
        {
            count = count + 1;
        }
        input_from_user = input_from_user >> 1;
    }

    // ##################################################
    // Golu Molu's approach
    // int count = 0;
    // while (input_from_user > 0)
    // {
    //     int remainder = (input_from_user % 2);
    //     if (remainder == 1)
    //     {
    //         count = count + 1;
    //     }

    //     input_from_user = (input_from_user / 2);
    // }
    cout << count << endl;
    return 0;
}