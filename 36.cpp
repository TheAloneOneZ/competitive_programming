#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> pairs { { '{', -1 }, { '}', 1 }, { '(', -2 }, { ')', 2 }, { '[', -3 }, { ']', 3 } };
void solve(string s)
{

    stack<char> st;

    bool flag = 1;
    for (char c : s) {
        if (pairs[c] < 1) {
            st.push(c);
        } else {
            if (!st.size()) {
                flag = 0;
                break;
            }
            char t = st.top();
            if (pairs[t] + pairs[c] != 0) {
                flag = 0;
                break;
            } else
                st.pop();
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
}
