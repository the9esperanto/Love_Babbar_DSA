// Pivot element in the sorted rotated array.
// We are taking start = mid + 1 after checking that mid is greater than start, because we know that pivot element lies on the 2nd slope that is downward line so it cannot lie on the position the mid currently is as it is greater than 0 which means it is on the 1st line or upward slope.

// Here, we are taking end = mid - 1 when the mid < array[0], because we know that the pivot element lies on the 2nd slope that is downward line so it can be at the position of the mid as well.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int getPivot(int array[], int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}

int main()
{

    int arr[5] = {8, 10, 17, 1, 3};

    int answer = getPivot(arr, 5);
    cout << "Pivot element is at the index " << answer << endl;
    return 0;
}