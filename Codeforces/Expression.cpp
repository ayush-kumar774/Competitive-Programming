//https://codeforces.com/problemset/problem/479/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
aakriti main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti a, b, c ;
        cin >> a >> b >> c ;
        aakriti Max = max ( a+b*c,  a*(b+c) );
        aakriti Max2 = max (a*b*c, (a+b)*c );
        aakriti Maxx =  max(Max, Max2);
        cout << max(Maxx, a+b+c) << endl ;
}