// Priority Queue
// Here, the first element of the queue is always greatest.
// Default priority queue is Max heap
// There is also Min Heap

#include <iostream>
#include <iomanip>
#include <queue>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    // Here, it is a max heap priority queue.
    priority_queue<int> maxi;

    // Here, it is a min heap priority queue.
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(5);
    maxi.push(3);

    cout << "The size of priority queue is " << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << (maxi.top()) << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "The size of priority queue is " << maxi.size() << endl;

    mini.push(1);
    mini.push(2);
    mini.push(5);
    mini.push(3);

    cout << "The size of priority queue is " << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << (mini.top()) << " ";
        mini.pop();
    }
    cout << endl;

    cout << "The size of priority queue is " << mini.size() << endl;

    cout << "Empty or not " << mini.empty() << endl;

    return 0;
}