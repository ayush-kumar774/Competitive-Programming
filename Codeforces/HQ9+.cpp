//http://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	string s ;
	cin >> s ;
	int h{0} , q{0} , nine{0} ;
	h = count(s.begin(), s.end(), 'H');
	q = count(s.begin(), s.end(), 'Q');
	nine = count(s.begin(), s.end(), '9');
	if (h != 0 or q != 0 or nine != 0)
    {
        cout << "YES" << endl ;
    }
    else
        cout << "NO" << endl ;
}
