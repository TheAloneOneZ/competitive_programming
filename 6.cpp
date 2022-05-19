#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--) {

        int n, q;
        cin >> n >> q;
        int arr[n + 10];
        arr[0] = arr[1] = 0;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            int gcd = 0;
            for (int i = 1; i < l; i++) {
                if (gcd == 0)
                    gcd = arr[i];
                else {
                    int temp = gcd, m = min(temp, arr[i]), mx = max(temp, arr[i]);
                    for (int j = 1; j <= m; j++) {
                        if (m % j == 0 && mx % j == 0)
                            temp = j;
                    }
                    gcd = temp;
                }
            }
            for (int i = r + 1; i <= n; i++) {

                if (gcd == 0)
                    gcd = arr[i];
                else {
                    int temp = gcd, m = min(temp, arr[i]), mx = max(temp, arr[i]);
                    for (int j = 1; j <= m; j++) {
                        if (m % j == 0 && mx % j == 0)
                            temp = j;
                    }
                    gcd = temp;
                }
            }

            cout << gcd << '\n';
        }
    }

    return 0;
}
