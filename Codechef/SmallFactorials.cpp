//I love You vv.
#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define endl "\n"
#define int long long
#define print(x) cout << #x << " " << x << endl;

template<typename... T>
void read(T &... args) {
    ((cin >> args), ...);
}

string mul(int x, string ans) {
    string s;
    int carry = 0;
    for (int i = 0; i < ans.size(); i++) {
        int a = ans[i] - '0';
        int prod = a * x + carry;
        s.push_back((prod % 10) + '0');
        carry = prod / 10;
    }
    while (carry) {
        s.push_back((carry % 10) + '0');
        carry /= 10;
    }
    return s;
}

void fact(int n) {
    string s = "1";
    for (int i = 2; i <= n; i++)
        s = mul(i, s);
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    read(testcases);

    while (testcases--) {
        int temp;
        read(temp);
        fact(temp);
    }

    return 0;

}
