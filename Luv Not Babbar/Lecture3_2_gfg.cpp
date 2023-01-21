// Type Inference
// Type Inference refers to automatic deduction of the data type of an expression in a programming language.

// 1) auto keyword: The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers. Note: The variable declared with auto keyword should be initialized at the time of its declaration only or else there will be a compile-time error. 

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // auto a; this line will give error
    // because 'a' is not initialized at
    // the time of declaration
    // a=33;
 
    // see here x ,y,ptr are
    // initialised at the time of
    // declaration hence there is
    // no error in them
    auto x = 4;
    auto y = 3.37;
    auto ptr = &x;

// Typeid is an operator which is used where the dynamic type of an object needs to be known. typeid(x).name() returns the data type of x, for example, it return ‘i’ for integers, ‘d’ for doubles, ‘Pi’ for the pointer to integer etc. But the actual name returned is mostly compiler dependent. 

    cout << typeid(x).name() << endl
         << typeid(y).name() << endl
         << typeid(ptr).name() << endl;
 
    return 0;
}


