//https://codeforces.com/problemset/problem/1238/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti testcases;
        cin >> testcases;
        while(testcases--)
        {
                aakriti x, y , count = 0;
                cin >> x >> y ;
               if(x -y ==1)
               {
                       cout << "NO\n";
               }
               else cout << "YES\n";
        }
}