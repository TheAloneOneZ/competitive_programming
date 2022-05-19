#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hsh[27] = { 0 };

    for (int i = 0; i < s.size(); i++) {
        hsh[s[i] - 'a']++;
    }

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        int inp_hsh[27] = { 0 };

        int mx_size = 0;
        char inp;
        int oc = 0;
        for (int i = 0; i < n; i++) {
            cin >> inp;

            if (inp_hsh[inp - 'a'] == 0) {
                inp_hsh[inp - 'a']++;
                mx_size += hsh[inp - 'a'];
                if (hsh[inp - 'a'] % 2)
                    oc++;
            }
        }
        if (oc <= 1) {
            cout << mx_size << '\n';
        } else
            cout << mx_size - oc + 1 << '\n';
    }

    return 0;
}
