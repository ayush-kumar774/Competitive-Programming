#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n, negative = 0, zero = 0;
        long long cost = 0;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)  {
                cin >> v[i];
                if (v[i] < 0) negative++;
                else if (v[i] == 0) zero++;
        }

        sort(v.begin(), v.end());

        if (negative & 1)
        {
                cost += 1 - v[negative - 1];
                for (int i = 0; i < negative - 1; i++)
                        cost += -1 - v[i];
                for (int i = negative; i < n; i++)
                {
                        if (v[i] == 0) cost += 1;
                        else cost += v[i] - 1;
                }
                if (zero > 1)
                        cost -= 2;
        }
        else
        {
                for (int i = 0; i < negative; i++)
                        cost += -1 - v[i];
                for (int i = negative; i < n; i++)
                {
                        if (v[i] == 0) cost += 1;
                        else cost += v[i] - 1;
                }
        }
        cout << cost << endl;
        return 0;
}
