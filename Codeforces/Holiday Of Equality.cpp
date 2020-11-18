//https://codeforces.com/problemset/problem/758/A
// I LOVE AAKRITI GOSWAMI
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define aakriti long long int
int main()
{
	aakriti n, max { 0 }, total { 0 };
	cin >> n;
	vector<int>v(n);
	for (auto& x : v)
	{
		cin >> x;
		if (x > max) max = x;
	}
	for (auto x : v)
	{
		int a = max - x;
		total += a;
	}
	cout << total << endl;
	return 0;

}
