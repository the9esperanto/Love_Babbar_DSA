// Find Unique
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

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

void unique(int array[], int size)
{

    for (int i = 0; i < (size); i++)
    {
        bool flag = 0;

        for (int j = (0); j < (size - 1); j++)
        {
            flag = 0;

            if (array[i] == array[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << array[i] << endl;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int array[100];
    input(array, n);
    // output(array, n);
    unique(array, n);

    return 0;
}