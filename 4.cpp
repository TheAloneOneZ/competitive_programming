#include <bits/stdc++.h>
using namespace std;

const int AMAX = 1e9 + 10;
const int N = 1e5 + 10;

long long presum[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        presum[i] = presum[i - 1] + temp;
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << presum[r] - presum[l - 1] << '\n';
    }

    return 0;
}
