#include <iostream>
using namespace std;

int main()
{
    int i, j, row, column;

    cout << "row : "; // input of row
    cin >> row;

    cout << "column : "; // input of column
    cin >> column;

    for (i = 1; i <= column; i++) // loop for column  count
    {
        for (j = 1; j <= row; j++) // loop for row count
        {
            if (i == 1 || i == column)
                cout << "*"; // column printing

            else if (j == 1 || j == row)
                cout << "*"; // row printing

            else
            {
                cout << " "; // space printing
            }
        }
        cout << endl;
    }
}