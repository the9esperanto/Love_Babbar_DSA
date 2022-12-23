#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int total_amount;

    cout << endl;
    cout << endl;
    cout << "Enter the amount for which the number of notes of either 100, 50, 20, 1 are required is to be calculated which will be equal to the amount entered." << endl;
    cin >> total_amount;

    // int note_type;
    // cout << "Enter the note either of 100, 50, 20, 1" << endl;
    // cin >> note_type;

    // Simple question: -
    // switch (note_type)
    // {
    // case 100:
    //     cout << "The number of notes of 100 required to make an amount equal to the entered amount are " << (total_amount / 100) << endl;
    //     break;
    // case 50:
    //     cout << "The number of notes of 50 required to make an amount equal to the entered amount are " << (total_amount / 50) << endl;
    //     break;
    // case 20:
    //     cout << "The number of notes of 20 required to make an amount equal to the entered amount are " << (total_amount / 20) << endl;
    //     break;
    // case 1:
    //     cout << "The number of notes of 1 required to make an amount equal to the entered amount are " << (total_amount / 1) << endl;
    //     break;
    // default:
    //     cout << "Invalid entry" << endl;
    // }
    int Golu_Molu;

    while (total_amount != 0)
    {

        if (total_amount >= 100)
        {
            Golu_Molu = 1;
        }
        else if (total_amount >= 50)
        {
            Golu_Molu = 2;
        }
        else if (total_amount >= 20)
        {
            Golu_Molu = 3;
        }
        else if (total_amount >= 1)
        {
            Golu_Molu = 4;
        }

        switch (Golu_Molu)
        {
        case 1:
            cout << "Hundereds = " << (total_amount / 100) << endl;
            total_amount = (total_amount % 100);
            break;
        case 2:
            cout << "Fifties = " << (total_amount / 50) << endl;
            total_amount = (total_amount % 50);
            break;
        case 3:
            cout << "Twenties = " << (total_amount / 20) << endl;
            total_amount = (total_amount % 20);
            break;
        case 4:
            cout << "Ones = " << (total_amount / 1) << endl;
            total_amount = (total_amount % 1);
            break;
        }
    }

    return 0;
}