// Queue
// FIFO

#include <iostream>
#include <iomanip>
#include <queue>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    // Creating a queue
    queue<int> q;

    // Push and pop elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();

    // Front and back element
    cout << "The front element is " << q.front() << endl;
    cout << "The back element is " << q.back() << endl;

    // Empty or not
    cout << "Empty or not " << q.empty() << endl;

    // Size
    cout << "The size of queue is " << q.size() << endl;

    // Swapping the content of two queue of same types and may or may not be of different sizes.
    queue<int> a;
    queue<int> b;

    return 0;
}