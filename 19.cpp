#include <bits/stdc++.h>
using namespace std;

int sum(int n, int a[])
{
    if (n < 0)
        return -1;
    if (!n)
        return a[0];
    return sum(n - 1, a) + a[n];
}

int main()
{
    int arr[6] = { 0, 1, 2, 4, 5, 5 };
    cout << sum(2, arr);

    return 0;
}
