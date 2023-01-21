// Queue
// Push
// Pop
// Size
// front

#include <iostream>
#include <iomanip>
#include <queue>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::queue<int> h;
    h.push(9);
    cout << h.size() << endl;
    cout << h.front() << endl;
    h.pop();
    cout << h.size() << endl;
    cout << h.front() << endl;

    return 0;
}