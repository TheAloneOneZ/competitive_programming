#include <bits/stdc++.h>
using namespace std;

bool comparator(int a, int b, bool (*func)(int a, int b)) { return func(a, b); }

void bubble_sort(int* arr, int n)
{

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (comparator(arr[j], arr[j + 1], [](int a, int b) -> bool { return a > b ? true : false; })) {
                swap(arr[j], arr[j + 1]);
            }
            /* if (j + 1 < n && arr[j] > arr[j + 1]) { */
            /*     int t = arr[j]; */
            /*     arr[j] = arr[j + 1]; */
            /*     arr[j + 1] = t; */
            /*     swap(arr[j], arr[j + 1]); */
            /* } */
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
}
