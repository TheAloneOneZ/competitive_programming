#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        multiset<long long> c;
        for (int i = 1; i <= n; i++) {
            long long temp;
            cin >> temp;
            c.insert(temp);
        }
        long long ans = 0;
        while (k--) {
            ans += *c.rbegin();
            long long t = *c.rbegin();
            c.erase(c.find(t));
            c.insert(t / 2);
        }
        cout << ans << endl;
    }
    return 0;
}
