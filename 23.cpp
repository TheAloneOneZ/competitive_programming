#include <bits/stdc++.h>
using namespace std;

void merge(int* arr, int l, int r, int mid)
{
    int ls, rs;
    ls = mid - l + 1;
    rs = r - mid;
    int L[ls + 1], R[rs + 1];
    L[ls] = R[rs] = INT_MAX;

    for (int i = 0; i < ls; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < rs; i++)
        R[i] = arr[mid + i + 1];

    int i, j, k;
    i = j = 0;
    k = l;
    while (k <= r) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
}
void merge_sort(int* arr, int l, int r)
{

    if (l == r)
        return;
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, r, mid);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(arr, 0, n - 1);
    for (auto i : arr)
        cout << i << " ";
    cout << '\n';

    return 0;
}
