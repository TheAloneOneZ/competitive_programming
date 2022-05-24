#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[5] = { 0, 2, 5, 3, 11 };
    if (upper_bound(arr, arr + 4, n) != arr + 5)
        cout << *upper_bound(arr, arr + 4, n) << endl;
    else
        cout << "No Upper bound" << endl;
    return 0;
}
