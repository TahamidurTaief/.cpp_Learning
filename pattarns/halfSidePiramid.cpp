#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Star printing number : ";
    cin >> n;

    for (i = n; i >= 1; i--) // for loop for column
    {
        for (j = 1; j <= i; j++) // for loop for row
        {
            cout << "*";
        }
        cout << endl;
    }
}