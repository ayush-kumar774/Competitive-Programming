//https://codeforces.com/problemset/problem/1092/B
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n ;
	cin >> n ;
	vector <int> V(n) ;
	for (auto& x : V) cin >> x ;
	sort(V.begin(), V.end()) ;
	int required{0} ;
	for(int i = 0 ; i < n ; i += 2)
    {
        int a = V[i + 1] - V[i] ;
        required += a ;
    }

    cout << required << endl ;
}
