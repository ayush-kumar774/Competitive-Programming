//https://codeforces.com/problemset/problem/1213/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define aakriti int
aakriti main()
{
	aakriti testcase ;
	cin >> testcase ;
	while (testcase--)
	{
		int n, i, count = 0;
		cin >> n ;
		vector<aakriti> v(n);
		for (auto& x : v) cin >> x;
		int min = v[n - 1];
		for (i = n - 2 ;i >= 0 ;i-- )
		{
			if (v[i] > min)
				count++;

			if (v[i] < min)
				min = v[i];
		}
		cout << count << endl;
	}
}
