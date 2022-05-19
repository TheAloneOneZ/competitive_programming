#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int arr[m + 1][n + 1];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            int temp;
            cin >> temp;
            arr[i][j] = (temp % 2) ? 1 : 0;
        }

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + arr[i][j];
        }

    int q;
    cin >> q;
    while (q--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << arr[l2][r2] - arr[l2][r1 - 1] - arr[l1 - 1][r2] + arr[l1 - 1][r1 - 1] << '\n';
    }

    return 0;
}
