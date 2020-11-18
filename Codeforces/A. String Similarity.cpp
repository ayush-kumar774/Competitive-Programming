#include <iostream>
using namespace std;
#define int long long
void solve() {
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	for (int i = 0 ; i  < ( (2* n) - 1) ; i += 2 )
	{
		cout << s[i] ;
	}
	cout << endl ;
}
int32_t main() {
	int testcases ;
	cin >> testcases ;
	while(testcases--) {
		solve() ;
	}
	return 0;
}