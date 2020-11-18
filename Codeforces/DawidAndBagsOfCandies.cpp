//https://codeforces.com/problemset/problem/1230/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
#define ayush main()
aakriti ayush
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti a, b , c, d , count = 0;
        cin >> a >> b >> c >> d;
        if( (a + b + c + d) % 2 == 0 )
        { 
                if(a + b == c + d) count++ ;
                if(a + c == b + d) count++ ;
                if(a + d == b + c) count++ ;
                if(a + b + c == d) count++ ;
                if(b + c + d == a) count++ ;
                if(a + c + d == b) count++ ;
                if(a + b + d == c) count++ ;
        }
        if(count ) cout << "YES" << endl ;
        else cout << "NO" << endl ;
}