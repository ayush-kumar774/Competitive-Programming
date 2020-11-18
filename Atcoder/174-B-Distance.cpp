// https://atcoder.jp/contests/abc174/tasks/abc174_b
#include <bits/stdc++.h>
using namespace std ;
int main() {
    long long n , d , counter = 0 ;
    cin >> n >> d ;
    long long x , y ;
    while (n--)
    {
        cin >> x >> y ;
        if (x < 0 ) x *= -1 ;
        if (y < 0 ) x *= -1 ;
        double di =  sqrt( (x * x) + (y * y) ) ;
        long long dis = ceil(di) ;
        //cout << dis << endl ;
        if (dis <= d) counter++ ;
    }
    cout << counter << endl ;
}