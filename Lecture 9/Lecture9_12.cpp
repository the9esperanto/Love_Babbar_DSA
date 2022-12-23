#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

void input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void alternate_swap(int array[], int size)
{
    for (int i = 0, j = 1; i <= (size - 2) && i <= (size - 1); i = i + 2, j = j + 2)
    {
        std::swap(array[i], array[j]);
    }

    output(array, size);
}

int main()
{
    int n;
    cin >> n;
    long long int array[100000];
    // input(array, n);
    // output(array, n);
    // alternate_swap(array, n);
    // output(array, n);

    return 0;
}