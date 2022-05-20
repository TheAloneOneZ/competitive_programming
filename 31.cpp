#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        unordered_set<long long> ms;
        for (int i = 0; i < N; i++) {
            long long temp;
            cin >> temp;
            ms.insert(temp);
        }
        for (int i = 0; i < M; i++) {
            long long temp;
            cin >> temp;
            if (ms.find(temp) != ms.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            ms.insert(temp);
        }
    }
    return 0;
}
