#include <iostream>
using namespace std;

int ptriangle(int n)
{
    int factorial = 1, i;

    for (i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n, i, j;

    cout << "Enter the row : ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; i <= i; j++)
        {
            cout << ptriangle(i) / (ptriangle(j) * ptriangle(i - j)) << " ";
        }
        cout << endl;
    }
}
