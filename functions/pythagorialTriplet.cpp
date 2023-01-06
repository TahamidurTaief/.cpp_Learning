/*
#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a, b, c;

    a = max(x, max(y, z));

    if (a == x)
    {
        b = y;
        c = z;
    }

    else if (a == y)
    {
        b = x;
        c = z;
    }

    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
        return true;

    else
        return false;
}

int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (check(x, y, z))
        cout << "Pythagorial Triplet" << endl;

    else
        cout << "Pythagorial not Triplet" << endl;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n = 300;

    for (i = 1; i <= n; i++)
    {
        cout << "🙂";
    }

    return 0;
}