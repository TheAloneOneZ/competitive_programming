#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<string> s;
    s.insert("abc");
    s.insert("zsd");
    s.insert("fgk");
    for (auto inp : s)
        cout << inp << endl;

    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    set<string>::iterator temp = s.find("asjas");
    if (temp != s.end())
        cout << *temp << endl;
    else
        cout << "NOT FOUND" << endl;

    multiset<string> ms;
    ms.insert("abc");
    ms.insert("zsf");
    ms.insert("abs");
    ms.insert("abc");
    for (auto val : ms)
        cout << val << endl;
    auto t = ms.find("abc");
    if (t != ms.end())
        cout << *t << endl;
    else
        cout << "NOT FOUND" << '\n';

    return 0;
}
