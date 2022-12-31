#include <iostream>
using namespace std;

int main()
{
    int i, j, row, column;

    cout << "row : ";
    cin >> row;

    cout << "column : ";
    cin >> column;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }

            else if (j == 1 || j == column)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}