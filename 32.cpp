#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<string> names;
        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            names.insert(temp);
        }
        for (auto name : names)
            cout << name << endl;
    }
    return 0;
}
