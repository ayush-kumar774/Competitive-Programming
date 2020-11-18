//https://codeforces.com/problemset/problem/546/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti k , n , w , s, p;
    cin >> k >> n >> w ;
    s = (k*w*(w + 1)/2-n );
    p = max(0,s);
    cout << p ;
}
