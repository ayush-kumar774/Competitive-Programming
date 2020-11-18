// https://www.hackerrank.com/challenges/encryption/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str , s = "" , ans = "";
    // cin >> str ;
    getline(cin, str) ;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ') continue ;
        else s += str[i] ;
    }
    double a = sqrt(s.size()) ;
    int column = ceil  (a) ;
    int row    = floor (a) ;

    if (column * row < s.size()) row += 1 ;

    char arr[row][column] = {'*'} ;
    for(int i = 0 ; i < row; i++)
    {
        for(int j = 0; j < column ; j++) {
            arr[i][j] = '*' ; 
        }
    }
    int k = 0 ;
    for(int i = 0; i < row ; i++) 
    {
        for(int j = 0 ; j < column ; j++)
        {
            arr[i][j] = s[k] ;
            k++ ;
            if(k == s.size()) {
                break ;
            }
        }
    }

    // for(int i = 0 ; i < row ; i++)
    // {
    //     for(int j = 0 ; j < column ; j++) {
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl ;
    // }
    
    for(int j = 0; j < column ; j++)
    {
        for(int i = 0; i < row ; i++) {
            if(arr[i][j] == '*') continue ;
            else ans += arr[i][j] ;
        }
        cout << ans << " " ;
        ans = "" ;
    }
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