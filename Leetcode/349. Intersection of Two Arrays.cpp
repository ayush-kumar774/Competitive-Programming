#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> intersection;
        for (auto x : s1)
        {
            if (s2.find(x) != s2.end())
            {
                intersection.push_back(x);
            }
        }
        return intersection;
    }
};

int main()
{
    fast;

    int n;
    cin >> n;

    vector<int> nums1(n);
    for (auto &x : nums1)
        cin >> x;

    int m;
    cin >> m;

    vector<int> nums2(m), ans;
    for (auto &x : nums2)
        cin >> x;

    Solution s;
    ans = s.intersection(nums1, nums2);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
