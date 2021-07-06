//https://atcoder.jp/contests/abc135/tasks/abc135_a
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int 
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti a, b ;
        cin >> a >> b ;
        if( (a + b) & 1 ) cout << "Impossible" ;
        else {
                if(a  > b)
                {
                        cout << a + (b - a) /2 << endl ;
                }
                else cout << b + (a - b) /2 << endl ;
        }
}