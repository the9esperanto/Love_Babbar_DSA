#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i <= n)
    {
        sum = sum + i;
        i = i+1;
    }
cout<< "The sum of numbers from 1 to " << n  << " is " << sum <<endl;
return 0;
}

// Formula for sum is Sum is n/2 [a+l]
// where n (number of numbers) is 5, a (first number) is 1 and l (last number) is 5

//Without Using Loop.
// #include<iostream>
// #include<iomanip>
// using std::cout;
// using std::cin;
// using std::endl;
// int main()
// {
//     float n;
//     cin >> n;
//     float a = 1;
//     float l = n;
//     float sum = ((n/2)*(a + l));
// cout<< sum <<endl;
// return 0;
// }