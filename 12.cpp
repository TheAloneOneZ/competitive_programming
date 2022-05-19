#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int robo[2 * N];
int arr[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        robo[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {

        int i, p;
        cin >> i >> p;

        if (arr[i] == p)
            cout << 0 << '\n';

        else if ((arr[i] < p && robo[p] == 0 && robo[p - arr[i]] == 0)
            || (arr[i] < p && robo[p] == 0 && robo[p - arr[i]] == 1 && arr[i] == p - arr[i])
            || (arr[i] > p && !robo[p]))
            cout << -1 << '\n';
        else if (arr[i] < p) {
            int ct = robo[p] + robo[p - arr[i]];
            if (p - arr[i] == arr[i])
                ct--;
            cout << ct << '\n';

        } else if (arr[i] > p) {
            cout << robo[p] << '\n';
        }
    }

    return 0;
}
