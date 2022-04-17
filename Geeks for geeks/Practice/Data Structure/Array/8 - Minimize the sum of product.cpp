#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        long long int minValue(int a[], int b[], int n)
        {
                sort(a, a + n);
                sort(b, b + n);
                long long res = 0;
                for (int i = 0; i < n; i++)
                {
                        res += a[i] * b[n - 1 - i];
                }
                return res;
        }
};

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n, i;
                cin >> n;
                int a[n], b[n];
                for (i = 0; i < n; i++)
                        cin >> a[i];
                for (i = 0; i < n; i++)
                        cin >> b[i];
                Solution ob;
                cout << ob.minValue(a, b, n) << endl;
        }

        return 0;
}