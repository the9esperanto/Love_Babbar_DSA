#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
for (int i = 0; i <= 5; i++)
{
    cout << "Mohammad" << endl;
    cout << "Danish" << endl;
    continue;
    cout << "Shaikh" << endl;
}
return 0;
}

// Here, the continue statement will take the compiler to the updation, and i will be updated and then the loop will start again. Hence, the statement written below the continue i.e., cout << "Shaikh" << endl; will be unreachable.