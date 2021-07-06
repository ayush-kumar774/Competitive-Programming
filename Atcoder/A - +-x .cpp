//https://atcoder.jp/contests/abc137/tasks/abc137_a
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define aakriti long long int
using namespace std;
int main()
{
	aakriti a, b;
	cin >> a >> b;
	vector<int> V(3);
	V[0] = a * b;
	V[1] = a - b;
    V[2] = a + b;
	sort(V.begin(), V.end());
	cout << V[2];
}
