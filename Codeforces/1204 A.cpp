//https://codeforces.com/contest/1204/problem/A
#include <bits/stdc++.h>
using namespace std;
#define aakriti string
#define endl "\n"

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        aakriti str;
        cin >> str;

        if (str == "0")
        cout << 0 << endl;
        else {
                int counter = count(str.begin(), str.end(), '0');
                if (counter == (str.size() - 1))
                        cout << ceil(((float)counter / 2)) << endl;
                else if ((str.size() - 1) & 1) cout << ceil(((float)(str.size() - 1) / 2)) << endl;
                else cout << ceil(((float)(str.size() - 1) / 2)) + 1 << endl;
        }
        return 0;
}
