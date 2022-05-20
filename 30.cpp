#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    set<long int> s;
    while (q--) {
        long int x, y;
        cin >> y >> x;

        if (y == 1)
            s.insert(x);
        else if (y == 2) {
            auto temp = s.find(x);
            if (temp != s.end())
                s.erase(x);
        } else {
            if (s.find(x) != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
