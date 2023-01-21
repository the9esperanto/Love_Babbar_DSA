// Stack
// LIFO
// Push
// Pop
// Top
// Size

#include <iostream>
#include <iomanip>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::stack<int> h;
    h.push(9);
    cout << h.size() << endl;
    cout << h.top() << endl;
    h.pop();
    cout << h.size() << endl;
    cout << h.top() << endl; 
    return 0;
}