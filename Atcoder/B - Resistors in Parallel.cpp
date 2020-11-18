//https://atcoder.jp/contests/abc138/tasks/abc138_b
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define aakriti float
int main()
{
	int n;
	cin >> n;
	vector<aakriti>v(n) ;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v[i] = (float(1)) / x;
	}
	aakriti sum = 0;
	for (auto x : v) sum += x;
	sum = 1.0 / sum;
	cout << sum << endl;
}
