#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int mn = i;
        for (int j = i + 1; j < n; j++) {
            if (a[mn] >= a[j])
                mn = j;
        }
        int t = a[i];
        a[i] = a[mn];
        a[mn] = t;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';

    return 0;
}
