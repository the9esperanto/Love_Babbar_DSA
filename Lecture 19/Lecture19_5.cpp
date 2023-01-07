// Stack
// LIFO
// Implementation is done with

#include <iostream>
#include <iomanip>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    // Creating a stack
    stack<string> s;

    // Push and pop elements
    s.push("Hardeek");
    s.push("Suresh");
    s.push("Karkare");

    cout << "Top element is " << s.top() << endl;

    s.pop();
    cout << "Top element after pop is " << s.top() << endl;

    // Size of stack
    cout << "The sizeof stack is " << s.size() << endl;

    // Check if empty or not
    cout << "Empty or not " << s.empty() << endl;
    return 0;
}