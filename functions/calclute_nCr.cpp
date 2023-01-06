#include <iostream>
using namespace std;

int nCr(int n)
{
    int i;
    int factorial = 1;

    for (i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n, r;

    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the value of r : ";
    cin >> r;

    int sum = nCr(n) / (nCr(r) * nCr(n - r));

    cout << "Your result is : " << sum << endl;

    return 0;
}