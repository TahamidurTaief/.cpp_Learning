#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, found = 0;

    cout << "Enter your number : ";
    cin >> n;

    int j = sqrt(n);

    for (i = 2; i <= j; i++)
    {
        if (n % i == 0)
        {
            cout << "This number is not prime.";
            found = 1;
        }
    }

    if (found == 0)
        cout << "This number is prime.";
}