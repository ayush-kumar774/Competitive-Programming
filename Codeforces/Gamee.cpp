//https://codeforces.com/problemset/problem/984/A
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	aakriti n;
	cin >> n;
	vector <aakriti> V(n);
	for (auto& x : V) cin >> x;
	sort(V.begin(), V.end());
	cout << V[(n - 1) / 2] << endl;
}
