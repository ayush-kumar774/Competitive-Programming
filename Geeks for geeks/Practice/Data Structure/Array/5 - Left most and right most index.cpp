#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
        pair<long, long> indexes(vector<long long> v, long long x)
        {
                pair<long, long> index;
                vector<long long>::iterator last, first;
                first = lower_bound(v.begin(), v.end(), x);
                if (first == v.end() || *first != x)
                {
                        index.first = -1;
                        index.second = -1;
                        return index;
                }
                last = upper_bound(v.begin(), v.end(), x);
                index.first = (first - v.begin());
                index.second = (last - v.begin() - 1);
                return index;
        }
};

// { Driver Code Starts.

int main()
{
        long long t;
        cin >> t;
        while (t--)
        {
                long long n, k;
                vector<long long> v;
                cin >> n;
                for (long long i = 0; i < n; i++)
                {
                        cin >> k;
                        v.push_back(k);
                }
                long long x;
                cin >> x;
                Solution obj;
                pair<long, long> pair = obj.indexes(v, x);

                if (pair.first == pair.second and pair.first == -1)
                        cout << -1 << endl;
                else
                        cout << pair.first << " " << pair.second << endl;
        }
        return 0;
}
// } Driver Code Ends