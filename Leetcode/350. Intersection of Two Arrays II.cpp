#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast                              \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);

class Solution
{
public:
	vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
	{
		vector<int> intersection;
		int n = nums1.size();
		int m = nums2.size();
		if (n < m)
		{
			for (auto x : nums1)
			{
				for (int i = 0; i < m; i++)
				{
					if (nums2[i] == x)
					{

						nums2[i] = INT_MAX;
						intersection.push_back(x);
						break;
					}
				}
			}
		}
		else
		{
			for (auto x : nums2)
			{
				for (int i = 0; i < n; i++)
				{
					if (nums1[i] == x)
					{

						nums1[i] = INT_MAX;
						intersection.push_back(x);
						break;
					}
				}
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
	ans = s.intersect(nums1, nums2);

	for (auto x : ans)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
