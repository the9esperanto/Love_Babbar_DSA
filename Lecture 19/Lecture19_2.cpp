// STL Vector
// Vector is a dynamic array.
// Whenever we try to add an element after the vector is full, the vector doubles itself.
// How does the vector doubles its size?
// Whenever we try to add an element after the vector is full, the vector makes another vector double its size and copies it's elements in the later made vector. An then the old vector is dumped.
// We can reduce the size of a vector as well.

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    // Making a new vector.
    // The capacity/size of a new vector is 0.
    std::vector<int> v;

    // Checking the size of a vector.
    int size_of_the_vector = v.size();
    cout << "The size of the vector is " << size_of_the_vector << endl;

    // Checking the capacity of a vector.
    // Size of the vector is the number of the elements present in the vector whereas the capacity of the vector is the capacity of the vector to hold elements.
    int capacity_of_the_vector = v.capacity();
    cout << "The capacity of the vector is " << capacity_of_the_vector << endl;

    // Inserting an element in a vector.
    v.push_back(9);

    // Capacity after inserting one element.
    capacity_of_the_vector = v.capacity();
    cout << "The capacity of the vector after inserting one element is " << capacity_of_the_vector << endl;

    // Size after inserting one element.
    size_of_the_vector = v.size();
    cout << "The size of the vector after inserting one element is " << size_of_the_vector << endl;

    // Inserting 2nd element in a vector.
    v.push_back(8);

    // Capacity after inserting 2nd element.
    capacity_of_the_vector = v.capacity();
    cout << "The capacity of the vector after inserting 2nd element is " << capacity_of_the_vector << endl;

    // Size after inserting 2nd element.
    size_of_the_vector = v.size();
    cout << "The size of the vector after inserting 2nd element is " << size_of_the_vector << endl;

    // Inserting 3rd element in a vector.
    v.push_back(7);

    // Capacity after inserting 3rd element.
    capacity_of_the_vector = v.capacity();
    cout << "The capacity of the vector after inserting 3rd element is " << capacity_of_the_vector << endl;

    // Size after inserting 3rd element.
    size_of_the_vector = v.size();
    cout << "The size of the vector after inserting 3rd element is " << size_of_the_vector << endl;
    // This shows that the capacity of the vector doubles.

    // Accessing the elements of the STL vector.
    cout << "The element at the 2nd index of the STL vector is " << v.at(2);
    cout << endl;
    cout << endl;

    // Checking if the vector is empty or not.
    // If 0 comes then it shows that the condition is false that is the array is not empty.
    cout << "Checking if the vector is Empty or not --> " << v.empty() << endl;
    cout << endl;

    // Accessing the front and last element.
    cout << "The front element is " << v.front() << endl;
    cout << "The last element is " << v.back() << endl;
    cout << endl;

    std::vector<int> h = {1, 2, 3, 4};

    int size_of_new_vector = h.size();
    cout << "The size of new vector is " << size_of_new_vector << endl;
    int capacity_of_new_vector = h.capacity();
    cout << "The capacity of new vector is " << capacity_of_new_vector << endl;

    cout << "The new vector is as follows." << endl;
    for (int i = 0; i < size_of_new_vector; i++)
    {
        cout << h[i] << " ";
    }
    cout << endl;

    // Removing the elements from the vector.
    h.pop_back();
    cout << "After poping the element " << endl;
    for (int i = 0; i < size_of_new_vector; i++)
    {
        cout << h[i] << " ";
    }
    cout << endl;

    // Clearing the vector
    // When we clear the vector the size of the vectorbecomes zero and not the capacity of the vector.
    h.clear();
    cout << "After clearing the vector" << endl;
    for (int i = 0; i < size_of_new_vector; i++)
    {
        cout << h[i] << " ";
    }
    cout << endl;

    // For loop till the size of vector.
    for (int i : h)
    {
        cout << h[i] << endl;
    }

    // More ways to initialize vectors
    // Here, 5 is the size of vector and 1 is to initialize all the elements as 1.
    // The default for all elements will be initialized by 0.
    std::vector<int> d(5, 1);
    for (int i : d)
    {
        cout << d[i] << endl;
    }

    // Copying one element into other.
    std::vector<int> Hardeek(h);
    for (int i : Hardeek)
    {
        cout << Hardeek[i] << endl;
    }
    return 0;
}