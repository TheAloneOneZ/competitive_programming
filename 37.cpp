#include <bits/stdc++.h>
using namespace std;

// By pushing Index of elements in stacks instead of element itself..
// TC-> O(2N) ~ O(N)
// No. of elements getting pushed = no. of elements getting popped
// so, 2*n operations are performed
void NGE(int* arr, int n)
{
    stack<int> st;
    int nge[n];

    int ct = 0;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " << nge[i] << endl;
    }
}
// FIRST TIME CODE
// Pushed elements into stack...
void solve(int arr[], int n)
{

    stack<int> st;
    unordered_map<int, int> v;
    int ct = 0;
    for (int i = 0; i < n; i++) {

        if (st.empty())
            st.push(arr[i]);
        else {

            while (!st.empty() && arr[i] > st.top()) {
                v[st.top()] = arr[i];
                st.pop();
                ct++;
            }
            st.push(arr[i]);
            ct++;
        }
    }
    while (!st.empty()) {
        v[st.top()] = -1;
        st.pop();
        ct++;
    }

    cout << ct << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " << v[arr[i]] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    /* solve(arr, n); */
    NGE(arr, n);

    return 0;
}
