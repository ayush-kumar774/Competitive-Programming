//https://atcoder.jp/contests/abc142/tasks/abc142_b
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti n , k, count{0};
        cin >> n >> k ;
        while(n--)
        {
                int x ;
                cin >> x ;
                if ( x >= k ) count++;
        }
        cout << count << endl ;
}