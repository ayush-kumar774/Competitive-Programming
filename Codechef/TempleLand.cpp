#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &x : v) cin >> x;

        if (n % 2 == 0) {
            cout << "no"<< endl;
            continue;
        } else if (v[0] != 1){
            cout << "no"<< endl;
            continue;
        } else {
            int flagI = 0, flagD = 0;
            for (int i = 0; i < n / 2 - 1; i++) {
                if (v[i + 1] - v[i] != 1) {
                    cout << "no"<< endl;
                    flagI = 1;
                    break;
                }
            }
            if (flagI == 1) continue;
            for (int i = n / 2; i < n - 1; i++) {
                if (v[i] - v[i + 1] != 1) {
                    cout << "no"<< endl;
                    flagD = 1;
                    break;
                }
            }
            if (flagD == 1) continue;
            cout << "yes" << endl;
        }
    }
    return 0;
}
