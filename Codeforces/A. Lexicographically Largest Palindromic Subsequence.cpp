#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s ;
    cin >> s ;
    map <char, int> mp ;
    for(int i = 0 ; i < s.size() ; i++)
        mp[s[i]]++ ;
    
    auto itr = mp.end();
        itr--;
	
    int count = itr->second;

	for (int i = 0; i < count; i++) {
		cout << itr->first;
	}
}

int main() {
	int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}