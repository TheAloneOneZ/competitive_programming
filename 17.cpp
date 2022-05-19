#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int zeroes[N];
int main()
{
    int n;
    cin >> n;
    int arr[n + 10];
    arr[0] = arr[n + 1] = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int q;
    cin >> q;
    while (q--) {
        int x, l, r;
        cin >> x >> l >> r;

        zeroes[++l] += x;
        zeroes[++r + 1] -= x;
    }

    int mx = INT_MIN;
    for (int i = 1; i <= n; i++) {

        zeroes[i] += zeroes[i - 1];
        arr[i] += zeroes[i];
        mx = max(arr[i], mx);
    }

    cout << mx << endl;

    return 0;
}
