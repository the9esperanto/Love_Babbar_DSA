// Pair
// Class which stores two values

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
// using namespace std;
int main()
{
    // Initializing a pair.
    std::pair<char, int> h;
    std::pair<char, int> a;

    // Puting values in pair
    a = {'a', 1};

    h = std::make_pair('h', 2);

    // Printing the values of pair
    cout << "a.first will print the first value of pair a that is value " << a.first << endl;
    cout << "a.second will print the second value of pair a that is value " << a.second << endl;

    // Copying pairs
    std::pair<char, int> b = a;
    h = a;

    // Copying reference
    std::pair<char, int> &c = b;

    // Swapping a pair
    std::pair<int, char> x = {1, 'a'};
    std::pair<int, char> y = {2, 'b'};
    
    x.swap(y); 
    cout << x.first << endl;
    cout << x.second << endl;
    cout << y.first << endl;
    cout << y.second << endl;


    return 0;
}