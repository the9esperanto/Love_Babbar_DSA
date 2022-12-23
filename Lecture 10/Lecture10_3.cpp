// Love Babbar's optimal approach for finding unique element.
// When we do XOR of a number with 0 we get the number itself.
// When we xor a odd number with one then that number is reduced by one and when we xor an even number with one than than number is incremented by one.
// XOR of an array gives un the unique element if rest of the elements are in pair of two.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int input(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int unique(int array[], int size)
{
    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer = answer ^ array[i];
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    int array[10000];
    int answer;
    input(array, n);
    answer = unique(array, n);
    cout << "The unique element is " << answer << endl;
    return 0;
}