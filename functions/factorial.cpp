#include <iostream>
using namespace std;

int factorial(int n)
{
    int i, factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n;

    cout << "Your factorial! number  : ";
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}