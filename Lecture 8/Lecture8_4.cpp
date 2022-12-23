// Function of power of a number.
#include <iostream>
using namespace std;
int power(int num_1, int num_2);

int main()
{
    int a, b;
    cin >> a >> b;
    int Golu_molu = power(a, b);
    cout << Golu_molu << endl;

    int c, d;
    cin >> c >> d;
    Golu_molu = power(c, d);
    cout << Golu_molu << endl;
}

int power(int num_1, int num_2)
{
    int answer = 1;
    for (int i = 1; i <= num_2; i++)
    {
        answer = answer * num_1;
    }
    return answer;
}