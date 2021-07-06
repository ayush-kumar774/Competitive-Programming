#include <bits/stdc++.h>
using namespace std ;

int gcd(vector<int> v)
{
    int result = v[0] ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        result = __gcd(result, v[i]) ;
    }
    return result ;
}

int lcm(int a, int b) {
    return a * (b / __gcd(a, b) ) ;
}

int lcm(vector<int> v)
{
    int result = v[0] ;
    for(int i = 0 ; i < v.size(); i++) {
        result = lcm(result, v[i]) ;
    }
    return result ;
}

int main()
{
    int n ; 
    int m ;
    cin >> n >> m ;
    vector <int> v(n), v2(m) ;
    for(auto &x : v) cin >> x ;    
    for(auto &x : v2) cin >> x ;    
    int f = lcm(v) ;
    int l = gcd(v2) ;
    int ans = 0 ;
    for(int i = f , j = 2 ; i <= l; i = f * j , j++) {
        if (l % i == 0) {
            ans++ ;
        } 
    }
    cout << ans << endl ;
}