#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
const int M = 2e5 + 10;
const int K = 1e9 + 10;

long long arr[N];

int main()
{

    int n, m;
    cin >> n >> m;

    while (m--) {
        int a, b, k;
        cin >> a >> b >> k;

        arr[a] += k;
        arr[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
    }
    /* for (int i = 1; i <= n; i++) */
    /*     cout << arr[i] << " "; */
    /* cout << '\n'; */
    long long mx = -K;
    for (int i = 1; i <= n; i++) {
        mx = max(mx, arr[i]);
    }
    cout << mx << '\n';

    return 0;
}
