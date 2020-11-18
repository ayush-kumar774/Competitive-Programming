// https://atcoder.jp/contests/abc172/tasks/abc172_c
#include <bits/stdc++.h>
using namespace std ;
int main() 
{
    long long n , m,  k , sum = 0 , flag = 0 , flag2 = 0;
    cin >> n >> m >> k ;
    vector<int> a (n) ;
    vector<int> b (n) ;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
        if (i == 0 and a[i] > k) {
            flag = 1 ;
        }
        sum += a[i] ;
    }
    for(int i = 0 ; i < m ; i++) {
        cin >> b[i] ;
        if (i == 0 and a[i] > k) {
            flag2 = 1 ;
        }
        sum += b[i] ;
    }
    if (flag and flag2) cout << 0 << endl ;
    else if (sum <= k) cout << n + m << endl ;
    else { 
    int counter = 0 ;
    for(int i = 0 ,  j= 0 ; i < n , j < m;) {
        if (a[i] < b[j] ) {
            k -= a[i] ;
            i++ ;
            counter ++ ;
        }
        else if (a[i] > b[j] ) {
            k -= b [i] ;
            j++ ;
            counter ++ ;
        }
        else if (a[i] == b[i] ) {
            k -= a[i] ;
            i++ ;
            counter ++ ;
        }
        if (k <= 0) break; 
    }
    cout << counter << endl ;
    }
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
*/