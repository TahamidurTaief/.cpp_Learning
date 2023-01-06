#include <iostream>
using namespace std;

int natural(int n)
{
    int i;
    int natural = 0;

    for (i = 0; i <= n; i++)
    {
        natural += i;
    }
    return natural;
}

int main()
{
    int n;

    cout << "Enter your value : ";
    cin >> n;

    cout << "your result is : " << natural(n) << endl;

    return 0;
}