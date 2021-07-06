//https://codeforces.com/contest/1207/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;

        while (t--) {
            long long b, p, f;
            cin >> b >> p >> f;

            long long h, c;
            cin >> h >> c;

            if (2 * (p + f) <= b) {
                    cout << h * p + c * f << endl;
                    continue;
            } else {
                    int possible = b / 2;
                    if (h >= c) (possible >= p) ? cout << p * h + (possible - p) * c << endl :
                            cout << (possible) * h << endl;
                    else (possible >= f) ? cout << f * c + (possible - f) * h << endl :
                            cout << (possible) * c << endl;
            }

        }
        return 0;
    }
