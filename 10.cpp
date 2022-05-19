#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 1e5 + 10;
int keys[N];

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        int k, d;
        cin >> k >> d;
        if (keys[d] != 1) {
            keys[d] = 1;
        }
    }

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        if (!keys[temp]) {
            cout << "NO\n";
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";

    return 0;
}
