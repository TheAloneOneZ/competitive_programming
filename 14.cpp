#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hsh[27] = { 0 };

    for (int i = 1; i <= s.size(); i++) {
        hsh[s[i - 1] - 'a' + 1]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        char arr[n + 10];
        int inp_hsh[27] = { 0 };

        int mx_size = 0;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            inp_hsh[arr[i] - 'a' + 1]++;
        }

        int oc = 0;
        for (int i = 1; i <= 26; i++) {
            if (inp_hsh[i]) {
                mx_size += hsh[i];
                if (hsh[i] != 0 && hsh[i] % 2)
                    oc++;
            }
        }
        if (oc <= 1)
            cout << mx_size << '\n';
        else {

            while (oc > 1) {
                oc--;
                mx_size--;
            }

            cout << mx_size << '\n';
        }
    }

    return 0;
}
