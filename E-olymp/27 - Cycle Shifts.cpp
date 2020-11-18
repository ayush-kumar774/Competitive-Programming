// https://www.e-olymp.com/en/problems/27
#include <bits/stdc++.h>
using namespace std ;
#define int long long

int binaryToDecimal(string n) 
{ 
    string num = n; 
    int dec_value = 0; 
  
   
    int base = 1; 
  
    int len = num.length(); 
    for (int i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    } 
  
    return dec_value; 
} 

int decimalToBinary(int N) { 
    unsigned long long B_Number = 0; 
    int cnt = 0; 
    while (N != 0) { 
        int rem = N % 2; 
        unsigned long long c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2;  
        cnt++; 
    } 
  
    return B_Number; 
} 

void solve() {
    int n ;
    cin >> n ;
    unsigned long long a = decimalToBinary(n);
    string s = to_string(a) ;
    int nn = s.size();
    int zero = 0 , one = 0 ;    
    for (int i = 0 ; i < nn ; i++) {
        if (s[i] == '0') zero++ ;
        else one++ ;
    }
    string ans = "" ;
    for (int i = 0 ; i < one ; i++) ans += '1' ;
    for (int i = 0 ; i < zero ; i++) ans += '0' ;
    int res = binaryToDecimal(ans) ;
    cout << res << endl ;
}

int32_t main() {
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
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