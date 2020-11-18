//https://codeforces.com/contest/1148/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int a{0}, b{0}, c{0} ;
    cin >> a >> b >> c ;
    cout << 2 * c + min(a , b) + min ( max( a , b ), min ( a, b ) + 1 ) ;


}
