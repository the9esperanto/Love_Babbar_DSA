#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Taking size of array.
        int size_of_array;
        cin >> size_of_array;

        // Creating an array.
        int array[size_of_array];
        for (int i = 0; i < size_of_array; i++)
        {
            cin >> array[i];
        }

        // Sorting an array.
             int temp = 0;
         for (int sorting_counter = 0; sorting_counter < (size_of_array - 1); sorting_counter++)
         {
             for (int inner_sorting_counter = sorting_counter + 1; inner_sorting_counter < size_of_array; inner_sorting_counter++)
             {
                 if (array[sorting_counter] > array[inner_sorting_counter])
                 {
                     temp = array[sorting_counter];
                     array[sorting_counter] = array[inner_sorting_counter];
                     array[inner_sorting_counter] = temp;
                 }
             }
         }


        // Printing an array to test
        // for (int i = 0; i < size_of_array; i++)
        // {
        //     cout << array[i] << endl;
        // }

        //Creating an permutation and calculating the number of operations to create the permutations.
        int sum = 0;
        bool flag = 1;
        for (int k = size_of_array-1; k >= 0; k--)
        {
            if (array[k] > k+1)
            {
                flag = 0;
                break;
            }
            else
            {
                sum = sum + k + 1 - array[k];
                flag = 1;
            }
        }

            if (flag == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << sum << endl;
            }
    }
    return 0;
}