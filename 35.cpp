#include <bits/stdc++.h>
using namespace std;

unordered_map<char, char> pairs { { '{', '}' }, { '[', ']' }, { '(', ')' } };

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack<char> p;

        bool flag = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
                p.push(s[i]);
            else if (s[i] == '}' || s[i] == ')' || s[i] == ']') {
                if (p.size() != 0) {

                    char c = p.top();
                    if (pairs[c] == s[i]) {
                        p.pop();
                    } else {
                        flag = false;
                        break;
                    }
                } else {
                    flag = false;
                    break;
                }
            }
        }
        if (!p.size() && flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
