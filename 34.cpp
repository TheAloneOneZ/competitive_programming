#include <bits/stdc++.h>
using namespace std;
struct compare {
    bool operator()(const pair<int, string>& p1, const pair<int, string>& p2) const
    {
        if (p1.first < p2.first)
            return true;
        else if (p1.first > p2.first)
            return false;
        else
            return p1.second > p2.second;
    }
};

int main()
{
    int n;
    cin >> n;
    multiset<pair<int, string>, compare> marks;
    while (n--) {

        string s;
        int m;
        cin >> s >> m;
        marks.insert({ m, s });
    }

    for (auto it = --marks.end(); it != --marks.begin(); it--) {
        cout << (*it).second << " " << (*it).first << endl;
    }

    return 0;
}
