#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int i, t1 = 0, t2 = 1;
    int nextTerm;

    for (i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);
}