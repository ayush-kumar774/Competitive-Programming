//https://codeforces.com/problemset/problem/1213/A
#include <iostream>
#include<algorithm>
using namespace std;
#define aakriti int
aakriti main()
{
	aakriti n, sum{ 0 };
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (aakriti i = 0 ; i < n ; i++ )
	{
		aakriti x;
		cin >> x;
		sum += (x % 2);
	}
	cout << min (sum, n - sum);
	return 0;
}
