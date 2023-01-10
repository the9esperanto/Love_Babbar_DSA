// Rotate Array
// Important concept = % is used

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void rotate(std::vector<int> &nums, int k)
{
    std::vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

int main()
{
    int n;
    cout << "Enter the size of the array." << endl;
    cin >> n;

    std::vector<int> arr;
    cout << "Enter the " << n << " elements to be stored in the array." << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "Enter the value of number of times the array is to be rotated." << endl;

    int k;
    cin >> k;

    cout << "The rotated array is as follows." << endl;

    rotate(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}