#include <bits/stdc++.h>
using namespace std;

const int H = 1e7 + 10;
int houses[H];
int main()
{

    int n, k;
    cin >> n >> k;

    int cnt = 0;
    while (n--) {
        int temp;
        cin >> temp;
        houses[temp]++;
        if (houses[temp] > k && houses[temp] - k == 1) {
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
