#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e3 + 10;
int hsh[N];
int main()
{
    int n;
    cin >> n;
    int arr[n + 10];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int ct = 0;

    for (int i = 1; i < N; i++) {
        if (hsh[i] > 0) {
            int ct1 = hsh[i];
            hsh[i]--;
            for (int j = 1; j < N; j++) {
                if (hsh[j] > 0) {
                    int ct2 = hsh[j];
                    hsh[j]--;

                    int d = abs(i - j);
                    int k1 = j - d;
                    int k2 = d + j;

                    if (k1 == k2 && k1 > 0 && k1 < N)
                        ct = (ct + hsh[k1] * ct1 * ct2) % M;
                    else {
                        if (k1 > 0 && hsh[k1])
                            ct = (ct + hsh[k1] * ct1 * ct2) % M;
                        if (k2 < N && hsh[k2])
                            ct = (ct + ct1 * ct2 * hsh[k2]) % M;
                    }
                    hsh[j]++;
                }
            }
            hsh[i]++;
        }
    }

    cout << ct << endl;
    return 0;
}
