    #include <bits/stdc++.h>
    using namespace std;

    int n, m;
    bool isOKHorizontal(const string&);

    int main() {


        ios_base::sync_with_stdio(0);
        cin.tie(0);

        cin >> n >> m;

        vector<string> flag(n, string(m, '0'));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> flag[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            if (!isOKHorizontal(flag[i])) {
                cout << "NO" << endl;
                return 0;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (flag[i].compare(flag[i + 1]) == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }

        cout << "YES" << endl;
        return 0;
    }


    bool isOKHorizontal(const string &s) {

        for (int i = 0; i < m; i++) {
            if (s[i] != s[0])
                return false;
        }
        return true;
    }

