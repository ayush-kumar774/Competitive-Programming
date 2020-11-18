// https://www.hackerrank.com/challenges/acm-icpc-team/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    vector<int> v ;
    int n , subjects , maxKnowledge = 0 ;
    cin >> n >> subjects ;
    string person[n] , ans = "";
    for(auto &x : person) cin >> x ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i  + 1 ; j < n ; j++)
        {
            for(int k  = 0 ; k < subjects ; k++)
            {
                if(person[i][k] == '0' and person[j][k] == '1') ans+= '1' ;
                else if (person[i][k] == '1' and person[j][k] == '0') ans+= '1' ;
                else if (person[i][k] == '1' and person[j][k] == '1') ans+= '1' ;
                else if (person[i][k] == '0' and person[j][k] == '0') ans+= '0' ;
            }
            int counter = count (ans.begin(), ans.end(), '1') ;
            ans = "" ;
            v.push_back(counter) ;
        }
    }
    // for(auto x : v) cout << x << " " ;
    // cout << endl ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(maxKnowledge < v[i]) maxKnowledge = v[i] ;
    }

    int answer = count(v.begin(), v.end(), maxKnowledge) ;
    cout << maxKnowledge << endl << answer << endl ;

}

int32_t main()
{
    fast;
    int testcases = 1;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/