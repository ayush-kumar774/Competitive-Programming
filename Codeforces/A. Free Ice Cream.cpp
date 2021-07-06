// https://codeforces.com/problemset/problem/686/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int noOfPerson , iceCream ;
    cin >> noOfPerson >> iceCream ;
    int distressKid = 0 , leftIcecream = 0 , sum = iceCream;
    while (noOfPerson--)
    {
        char ch ;
        int no ;
        cin >> ch >> no ;
        if(ch == '+') {
            sum += no ;
        }
        else if(ch == '-') {
            if(sum < no ) {
                distressKid++ ;
            }
            else
            {
                sum -= no ; 
            }
        }
    }
    cout << sum << " " << distressKid << endl ;
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