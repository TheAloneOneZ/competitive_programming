#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<multiset<string>> marks(101);

    while (n--) {
        string s;
        int m;
        cin >> s >> m;
        marks[m].insert(s);
    }

    for (int i = 100; i >= 0; i--) {
        if (marks[i].size()) {
            for (string c : marks[i])
                cout << c << " " << i << endl;
        }
    }

    return 0;
}
