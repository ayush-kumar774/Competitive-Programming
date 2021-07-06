#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
//#define int long long
#define ll long long

ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n, maxx = 0;
        cin >> n;

        vector<ll> v(n);
        for (auto &x : v) cin >> x;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (sumOfDigits(v[i] * v[j]) >= maxx) {
                    maxx = sumOfDigits(v[i] * v[j]);
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}
