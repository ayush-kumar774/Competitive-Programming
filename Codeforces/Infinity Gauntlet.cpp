//https://codeforces.com/problemset/problem/987/A
// I LOVE AAKRITI GOSWAMI
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define aakriti int
aakriti main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	aakriti n, red{ 0 }, green{ 0 }, purple{ 0 }, blue{ 0 }, orange{ 0 }, yellow{ 0 };
	cin >> n;

	vector<string>V(n);
	for (auto& x : V) cin >> x;
	cout << 6 - n << endl ;
	for (auto x : V)
	{
		if (x == "red") red++;
		if (x == "orange") orange++;
		if (x == "blue") blue++;
		if (x == "green") green++;
		if (x == "yellow") yellow++;
		if (x == "purple") purple++;
	}
	if (!red) cout << "Reality" << endl;
	if (!orange) cout << "Soul" << endl;
	if (!blue) cout << "Space" << endl;
	if (!green) cout << "Time" << endl;
	if (!yellow) cout << "Mind" << endl;
	if (!purple) cout << "Power" << endl;
}
