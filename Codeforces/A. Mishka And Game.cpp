// https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int Mishka = 0 , Chris = 0 ;
    while(n--)
    {
        int MishkaScore , ChrisScore ;
        cin >> MishkaScore >> ChrisScore ;
        if(MishkaScore > ChrisScore) Mishka++ ;
        else if(MishkaScore < ChrisScore) Chris ++ ;
    }
    if(Mishka > Chris) cout << "Mishka" << endl ;
    else if(Mishka < Chris) cout << "Chris" << endl ;
    else if(Mishka == Chris) cout << "Friendship is magic!^^" << endl ;
}
int32_t main()
{
    int testcases = 1 ;
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