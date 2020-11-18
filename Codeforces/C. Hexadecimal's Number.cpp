// https://codeforces.com/problemset/problem/9/C
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

// string decimaltoBinary (int n) {
//     string s = bitset<64> (n).to_string();  
//     const auto loc1 = s.find('1');   
//     if(loc1 != string::npos) 
//         return s.substr(loc1); 
//     return "0"; 
// }

// int binaryToDecimal(string s) 
// { 
//     string num = s; 
//     int dec_value = 0; 
//     int base = 1; 
//     int len = num.length(); 
//     for (int i = len - 1; i >= 0; i--) { 
//         if (num[i] == '1') 
//             dec_value += base; 
//         base = base * 2; 
//     } 
//     return dec_value; 
// } 

int decimaltoBinary (int n) {
    int ans = 0 , p = 1 ;
    while ( n > 0 ) {
        ans += (n % 2) * p ;
        n /= 2 ;
        p *= 10 ;
    }
    return ans ;
}

void solve()
{
    int n , counter = 0 ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++) {
        if (decimaltoBinary(i) <= n) {
            counter ++ ;
        } 
        else break ;
    }
    cout << counter << endl ;
}

int32_t main()
{
    fast;
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