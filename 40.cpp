#include <bits/stdc++.h>

using namespace std;

vector<int> quick_sort(vector<int> arr, int n, int& ct)
{
    if (n <= 1)
        return arr;
    /* int pivot = arr[n / 2]; */
    int pivot = arr[0];
    vector<int> larr;
    vector<int> rarr;

    for (int i = 1; i < n; i++) {
        if (arr[i] <= pivot)
            larr.push_back(arr[i]);
        else
            rarr.push_back(arr[i]);
        ct++;
    }

    larr = quick_sort(larr, larr.size(), ct);
    rarr = quick_sort(rarr, rarr.size(), ct);
    larr.push_back(pivot);
    for (auto i : rarr) {
        ct++;
        larr.push_back(i);
    }
    return larr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int ct = 0;
    arr = quick_sort(arr, n, ct);
    vector<int>::iterator it;

    for (it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << "TC: " << ct << endl;

    return 0;
}
