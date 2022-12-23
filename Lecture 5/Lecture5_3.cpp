// Increment and decrement operator.

// i++  Post increment
// ++i  Pre increment
// i+=1 Post increment

// i--  Post decrement
// --i  Pre decrement
// i-=1 Post decrement

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // int i = 4;
    // int a = i++;
    // cout << "'a' should be equal to 4 ahead " << a << endl;
    // cout << "'i' should be equal to 5 ahead " << i << endl;

    // int x = 3, y = 2;
    // int sum = y + (x++);
    // cout << "'x' should be equal to 4 ahead " << x << endl;
    // cout << "'sum' should be equal to 2+3=5 ahead " << sum << endl;

    // int p = 11;
    // cout <<"'p' before is " << p << endl;
    // int q = ++p;
    // cout << "'p' now is " << p << endl;
    // cout << "'q' now is " << q << endl;

    // int s = 2, t = 3;
    // sum = s + (++t);
    // cout <<"'t' is " << t << endl;
    // cout <<"sum is " << sum << endl;

    // int i = 3;
    // int a = i--;
    // cout << "'i' should be 2 ahead " << i << endl;
    // cout <<"'a' should be 3 ahead " << a << endl;

    // int i = 3;
    // int a = --i;
    // cout << "'i' should be 2 ahead " << i << endl;
    // cout <<"'a' should be 2 ahead " << a << endl;

    // int i = 7;
    // cout << "'i' should be 8 ahead " << (++i) << endl;
    // cout << "'i' should be 8 ahead " << (i++) << endl;
    // cout << "'i' should be 8 ahead " << (--i) << endl;
    // cout << "'i' should be 8 ahead " << (i--) << endl;

    // Question 1: -
    // int a = 10, b = 1;
    // if (++a)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << ++b;
    // }
    // Answer is 1.

    // Question 2: -
    //  int a = 1;
    //  int b = 2;

    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage1 - Inside if" << endl;
    // }
    // else
    // {
    //     cout << "Stage2 - Inside else" << endl;
    // }
    // cout << a << " " << b << endl;
    // Answer is Stage1 - Inside if, 0, 3

    // Question 3: -
    // int a = 1;
    // int b = 2;

    // if (a-- > 0 || ++b > 2)
    // {
    //     cout << "Stage1 - Inside if" << endl;
    // }
    // else
    // {
    //     cout << "Stage2 - Inside else" << endl;
    // }
    // cout << a << " " << b << endl;
    // Answer is Stage1 - Inside if, 0, 2

    // Question 4: -
    // int number = 3;
    // cout << (25 * (++number));
    // Answer is 100

    // Question 5: -
    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b << endl;
    // cout << c << endl;
    //Answer is 1, 3
    return 0;
}