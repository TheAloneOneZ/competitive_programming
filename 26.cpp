#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto s : m)
        cout << s.first << " " << s.second << endl;

    return 0;
}
