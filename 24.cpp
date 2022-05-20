#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, string> ps;

    ps = make_pair(1, "v");
    cout << ps.first << ps.second << endl;
    ps = { 2, "theAloneOne" };
    cout << ps.first << ps.second << endl;
    pair<int, int> p_array[3];
    p_array[0] = { 1, 2 };
    p_array[1] = { 2, 3 };
    p_array[2] = { 3, 3 };

    for (int i = 0; i < 3; i++)
        cout << p_array[i].first << " " << p_array[i].second << endl;

    vector<int> vec = { 1, 2, 3, 4, 5 };
    vector<int>::iterator it = vec.begin();

    for (it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";
    cout << endl;

    vector<pair<int, int>> v = { { 1, 1 }, { 2, 4 }, { 3, 9 } };
    vector<pair<int, int>>::iterator iter;

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << (*iter).first << " " << (*iter).second << endl;

    map<int, string> m;
    m[0] = "x";
    m[1] = "theAloneOne";
    m[4] = "imNotAlone";

    m.insert({ 10, "destitute" });
    map<int, string>::iterator itm;

    for (itm = m.begin(); itm != m.end(); itm++)
        cout << itm->first << " " << itm->second << endl;
    for (auto& items_m : m)
        cout << items_m.first << " " << items_m.second << endl;

    auto temp = m.find(5);
    if (temp == m.end())
        cout << "No value" << endl;
    else
        cout << temp->first << " " << temp->second << endl;

    return 0;
}
