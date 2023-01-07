// // Search in a rotated sorted array.
// // 7, 9, 1, 2, 3

// #include <iostream>
// #include <iomanip>
// using std::cin;
// using std::cout;
// using std::endl;

// void input(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }
// }

// // void output(int array[], int size)

// int element_finder(int array[], int size, int element)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + ((end - start) / 2);

//     while (start <= end)
//     {
//         if (mid == element)
//         {
//             return mid;
//         }
//         else if ((element > mid) && (element <= end))
//         {
//             start = mid + 1;
//         }
//         else if ((element < mid) && (element >= start))
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of the array." << endl;
//     cin >> size;
//     int array[1000];
//     cout << "Enter " << size << " elements to be stored in the array." << endl;
//     input(array, size);

//     int element;
//     cout << "Enter the element to be found in the array." << endl;
//     cin >> element;

//     int answer = element_finder(array, size, element);

//     cout << "The element is at the " << answer << " position in the array" << endl;

//     return 0;
// }
