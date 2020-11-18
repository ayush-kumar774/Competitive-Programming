//https://codeforces.com/problemset/problem/1136/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define aakriti long long int
int main()
{
	aakriti n, count{ 0 }, i = 0;
	cin >> n;
	vector<aakriti> v(n);
	for (int i = 0; i < n; i++)
	{
		aakriti b;
		cin >> b;
		cin >> v[i];
	}
	aakriti read;
	cin >> read;
	while (read > v[i])
	{
		count++;
		i++;
	}
	cout << n - count << endl;
}
