#include <bits/stdc++.h>
using namespace std;
int* merge_sort(int*, int);
int* merge(int*, int*, int, int);
int* m_sort(int*, int);
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int* temp = merge_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << '\n';

    return 0;
}
int* merge_sort(int arr[], int n)
{

    // merge + sort
    // if we have two sorted array, we can
    // merge them to form a new sorted array

    return m_sort(arr, n);
}

int* merge(int* L, int* R, int l1, int r1)
{
    int* arr = new int[l1 + r1];

    int i = 0, j = 0, k = 0;
    for (; i < l1 && j < r1;) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    if (i < l1) {
        while (i < l1) {
            arr[k] = L[i];
            i++;
            k++;
        }
    }
    if (j < r1) {
        while (j < r1) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    return arr;
}
int* m_sort(int arr[], int n)
{

    if (n == 1) {
        return arr;
    }
    int* L = new int[n / 2];
    int* R = new int[n - n / 2];

    int i = 0;
    for (; i < n / 2; i++)
        L[i] = arr[i];
    int j = 0;
    for (int z = n / 2; z < n; z++) {
        R[j] = arr[z];
        j++;
    }

    L = m_sort(L, n / 2);
    R = m_sort(R, n - n / 2);

    return merge(L, R, n / 2, n - n / 2);
}
