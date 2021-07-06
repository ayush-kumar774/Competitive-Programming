//https://atcoder.jp/contests/abc158/tasks/abc158_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a , b ;
    cin >> n >> a >> b ;
    long long rem, ans ;
    ans = n / (a + b)*a ;
    rem = n % (a + b) ;
    ans += min(rem, a);
    cout << ans << endl ;
}