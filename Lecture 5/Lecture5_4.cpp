// ************** For Loop **************
// for (int i = 1; i <= n; i++)
// First, we write the 'i', which is an iterating variable,
// Second, we write the condition for i.
// Third, we update the variable 'i'.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // cout << "Printing count from 1 to n" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    //     int i = 1;
    //  for( ; ; )
    //  {
    //     if(i <= n)
    //     {
    //         cout << i << endl;
    //     }

    //     i++;
    //  }

    // int i = 1;
    //  for( ; ; )
    //  {
    //     if(i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }

    //     i++;
    //  }
    for (int a = 0, b = 1, c = 3; a <= 5 && b < 5 && c >= 2; a++, b++, c--)
    {
        cout << a << " " << b << " " << a + b << " " << c << endl;
    }

    return 0;
}

/*
For Loop
(____________________________________________;________________________;_______________________)
 one or more initialization (same data type)   one or more conditions    one or more updation
 Not mandatory        Not mandatory        Not mandatory
 just write ;           just write ;

This code can also be writtn without any initialization, conditions and updation
for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

Like this.......

int i = 1;
 for( ; ; )
 {
    if(i <= n)
    {
        cout << i << endl;
    }

    i++;
 }

 Although this might run continuously even after printing till 5 as this for loop doesn't know when to stop.

We can use break;
break will stop the loop and come out of it.

int i = 1;
 for( ; ; )
 {
    if(i <= n)
    {
        cout << i << endl;
    }
    else
    {
        break;
    }

    i++;
 }


 We can do one or more initiallization (of the same data type), one or more conditions and one or more updations.

 for (int a = 0, int b = 1; a <= 5 && b < 5; a++, b++)
 {
    cout << a << " " << b << " " << a+b endl;
 }


 Flow of for loop
 for (______; ________; ________)
 {
    ........
 }

First we go to the initialization one time only,
then we go to the condition, if the condition is true then we go to the body.
Then we go to the updation.
Then we go to the condition, if the condition is true.
Then we go to the body.
Then we go to the updation.
Then we go to the condition, if the condition is flase then we go out of the for loop.

*/