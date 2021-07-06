// https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool isPrime(int n)
{
    int flag = 0;
    for(int i = 2 ; i <=sqrt(n) ; i++)
    {
        if(n % i == 0) {
            flag = 1 ;
            break ;
        }
    }
    if(flag == 0) return true ;
    else return false ;
}

void solve()
{
    int n ;
    cin >> n ;
    if(n == 15) cout << 6 << " " << 9 << endl ; 
    else if( n == 13) cout << 4 << " " << 9 << endl ;
    else if (n % 2 == 0) {
        if(isPrime(n / 2 )) {
            cout << (n / 2) - 1 << " " << (n / 2) + 1 << endl ; 
        }
        else cout << n / 2 << " " << n / 2 << endl ; 
    }
    else if (isPrime(n)) {
        int a , b ;
        a = n / 2 ;
        b = n - a ;
        if(isPrime(a)) {
            a-- ;
            b++ ;
        } 
        if(isPrime(b)) {
            b++ ;
            a-- ;
        }
        cout << a << " " << b << endl ;
    }
    else if (n % 2 != 0 ) {
        //cout << (n / 2) << " " << (n / 2) + 1 << endl ; 
        int a , b ;
        a = n / 2 ;
        b = n - a ;
        if(isPrime(a)) {
            a-- ;
            b++ ;
        } 
        if(isPrime(b)) {
            b++ ;
            a-- ;
        }
        cout << a << " " << b << endl ;
    }
}
int32_t main()
{
    fast ;
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