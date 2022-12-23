// Calculator using swtich case.
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int num_1, num_2;
    cout << "Enter the first operand:" << endl;
    cin >> num_1;
    cout << "Enter the first operand:" << endl;
    cin >> num_2;
    char ch;
    cout << "Enter either of the operators (+, -, /, *, % ):" << endl;
    cin >> ch;

    // Here, I can put a constant or an expression as well.
    switch (ch)
    {
    case '+':
        cout << "The sum of " << num_1 << " and " << num_2 << " is " << num_1 + num_2 << "." << endl;
        break;
    case '-':
        cout << "The difference between " << num_1 << " and " << num_2 << " is " << num_1 - num_2 << "." << endl;
        break;
    case '/':
        cout << "The divison of " << num_1 << " by " << num_2 << " gives " << num_1 / num_2 << "." << endl;
        break;
    case '*':
        cout << "The multiplication of " << num_1 << " and " << num_2 << " is " << num_1 * num_2 << "." << endl;
        break;
    case '%':
        cout << "The remainder obtained by division of " << num_1 << " by " << num_2 << " gives " << num_1 + num_2 << "." << endl;
        break;
    default:
        cout << "Theek se input daal.";
    }

    return 0;
}