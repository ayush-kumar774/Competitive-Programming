//https://codeforces.com/problemset/problem/136/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; ++i) {
        int n;
        cin >> n;
        arr[n] = i + 1;
    }

    for (int i = 1; i <= size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;

}
