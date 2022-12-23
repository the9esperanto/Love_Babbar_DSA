// Arrays
// Array :-
// List of variables of same data types.
// contigious location
// Values of array can be accessed by Index (starting from 0).

// Declaration of array
// data_type   array_name[array_size];
// Here, Danish shows the address of the first memory location.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
// int Golu_Molu(int Shaikh_Sahab[])
// {
//     Shaikh_Sahab[1] = {0};
//     Shaikh_Sahab[2] = {99};
// }

int main()
{
    // Declaration of array.
    // Here, Danish shows the address of the first memory location.
    // int Danish[4] = {1, 2, 3, 4};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << Danish[i] << endl;
    // }

    // Golu_Molu(Danish);

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << Danish[i] << endl;
    // }

    // v = 100
    //  v[1] => 100 + 4 = 104
    // Index goes from 0 to n-1, if size is n.

    // Initialization of array
    // int lalchi_aurat[3] = {5,7,11};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << lalchi_aurat[i] << endl;
    // }

    // Random garbage values will be printed here.
    // int Mohammad_Danish_Shaikh[100];
    // for (int i = 0; i < 100000; i++)
    // {
    //     cout << Mohammad_Danish_Shaikh[i] << endl;
    // }

    // This will only work for 0.
    // int MDS[100000] = {0};
    // for (int i = 0; i < 100000; i++)
    // {
    //     cout << MDS[i] << endl;
    // }

    // This won't work
    // int Dinya[100000] = {1};
    // for (int i = 0; i < 100000; i++)
    // {
    //     cout << Dinya[i] << endl;
    // }
    
    // int Dinya[10] = {[0...9] = 5};

    int Dinya[10];
    fill_n(Dinya, 10, 4);

    for (int i = 0; i < 10; i++)
    {
        cout << Dinya[i] << endl;
    }



    return 0;
}