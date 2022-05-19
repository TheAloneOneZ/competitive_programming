#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh_arr[27][N];

int main()
{

    int t;
    cin >> t;

    while (t--) {

        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 1; i <= n; i++) {
            hsh_arr[s[i - 1] - 'a'][i] = 1;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            int str_len = r - l + 1;

            int oc = 0;
            for (int i = 0; i < 26; i++) {
                int cnt = 0;
                for (int k = l; k <= r; k++) {
                    cnt += hsh_arr[i][k];
                }
                /* cout << cnt << '\n'; */
                if (cnt % 2)
                    oc++;
            }
            if (oc <= 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
