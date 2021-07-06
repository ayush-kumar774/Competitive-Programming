//https://atcoder.jp/contests/abc123/tasks/abc123_a
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti a, b, c, d, e, k ;
        cin >> a >> b >> c >> d >> e >> k ;
        if(e - a > k or e - b > k or e - c > k or e - d > k)
        cout << ":(\n";
        else
        {
                cout << "Yay!\n";
        }
         
}