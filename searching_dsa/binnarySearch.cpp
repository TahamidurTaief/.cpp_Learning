#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 10;
    int a[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    cout << "Your array elemens are : " << endl;
    for (j = 0; j < n; j++)
    {
        cout << a[j] << "\t";
    }

    int data, found = 0;
    int left = 0, right = n - 1, mid;

    cout << "\nEnter your searching data : ";
    cin >> data;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (data == a[mid])
        {
            found = 1;
            cout << "Youtr data position is : " << mid + 1 << endl;
        }

        if (data > a[mid])
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    if (found == 0)
        cout << "sorry, Your data is not available" << endl;

    return 0;
}

/*
int binnary_search(int a[], int n)
{
    int data, found = 0;
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (data == a[mid])
        {
            found = 1;
            cout << "Youtr data position is : " << mid << endl;
        }

        if (data < a[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }

    if (found == 0)
        cout << "sorry, Your data is not available";

    return -1;
}
*/