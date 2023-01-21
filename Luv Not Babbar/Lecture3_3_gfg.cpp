// Type Inference

// Decltype keyword
// It inspects the declared type of an entity or the type of an expression.

#include <bits/stdc++.h>
using namespace std;

int fun1() { return 10; }
char fun2() { return 'g'; }

int main()
{
    // Data type of x is same as return type of fun1()
    // and type of y is same as return type of fun2()
    decltype(fun1()) x;
    decltype(fun2()) y;

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;

    int x = 5;

    // j will be of type int : data type of x
    decltype(x) j = x + 5;

    cout << typeid(j).name();

    return 0;
}