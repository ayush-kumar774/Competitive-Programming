#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int main() {

int t;
cin >> t;

while (t--) {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;
    int currMin = v[0];
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < currMin) {
            currMin = v[i];
            for (int j = 0; j < i; j++) {
                if (v[j] > currMin) {
                    ans++;
                }
            }
        }
    }
    cout << "ans is: " << ans;
}
return 0;
}
