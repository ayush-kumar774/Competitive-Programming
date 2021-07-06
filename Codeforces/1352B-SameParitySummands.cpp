#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
	int testcase;
	cin >> testcase;
	while (testcase--)
  {
		int n, k;
		cin >> n >> k;
		int n1 = n - (k - 1);
		if (n1 > 0 && n1 % 2 == 1) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; i++) cout << "1 ";
			cout << n1 << endl;
			continue;
		}
		int n2 = n - 2 * (k - 1);
		if (n2 > 0 && n2 % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO" << endl;
	}
}
// Consider two cases: when we choose all odd numbers and all even numbers.
// In both cases let's try to maximize the maximum. So, if we choose odd numbers,
// let's try to take k−1 ones and the remainder n−(k−1). But we need to sure that n−k+1
// is greater than zero and odd. And in case of even numbers, let's try to take k−1 twos
// and the remainder n−2(k−1). We also need to check that the remainder is greater than
// zero and even. If none of these cases is true, print "NO".
