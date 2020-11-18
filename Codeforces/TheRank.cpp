//https://codeforces.com/problemset/problem/1017/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define aakriti int
aakriti main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	aakriti n;
	cin >> n;
	n = n - 1;
	aakriti sum = 0, count{ 0 };
	aakriti eng, ger, math, hist;
	cin >> eng >> ger >> math >> hist;
	sum = eng + ger + math + hist;
	while (n--)
	{
		aakriti sum2 = 0;
		aakriti eng, ger, math, hist;
		cin >> eng >> ger >> math >> hist;
		sum2 = eng + ger + math + hist;
		if (sum < sum2) count++;
	}
	cout << count << endl;
}
