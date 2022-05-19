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

        int forward_arr[n + 10];
        int backward_arr[n + 10];
        forward_arr[0] = backward_arr[0] = 0;
        forward_arr[n + 1] = backward_arr[n + 1] = 0;
        int gcd_temp = 0;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];

            if (i == 1) {
                forward_arr[i] = arr[i];
                continue;
            }
            int m, mx, temp = -1;
            m = min(forward_arr[i - 1], arr[i]);
            mx = max(forward_arr[i - 1], arr[i]);

            for (int k = 1; k <= m; k++) {
                if (m % k == 0 && mx % k == 0)
                    temp = k;
            }
            forward_arr[i] = temp;
        }

        for (int i = n; i > 0; i--) {
            if (i == n) {
                backward_arr[i] = arr[n];
                continue;
            }

            int m, mx, temp = -1;
            m = min(backward_arr[i + 1], arr[i]);
            mx = max(backward_arr[i + 1], arr[i]);

            for (int k = 1; k <= m; k++) {
                if (m % k == 0 && mx % k == 0)
                    temp = k;
            }
            backward_arr[i] = temp;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            int gd = 0, m, mx;
            m = min(forward_arr[l - 1], backward_arr[r + 1]);
            mx = max(forward_arr[l - 1], backward_arr[r + 1]);
            for (int k = 1; k <= m; k++) {
                if ((m % k) == 0 && (mx % k) == 0)
                    gd = k;
            }
            cout << gd << '\n';
        }
    }

    return 0;
}
