#include <bits/stdc++.h>
using namespace std;
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define int long long

int32_t main() {
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < str.size(); i++) {
                if (i % 2 == 0) {
                        if (str[i] >= 97 and str[i] <= 122) {
                                count++;
                        }
                } else {
                        if (str[i] >= 65 and str[i] <= 90) {
                                count++;
                        }
                }
        }
        if (count == str.size()) {
                cout << "Yes" << endl;
        } else {
                cout << "No" << endl;
        }
}