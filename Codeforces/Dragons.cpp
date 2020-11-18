/*
   author: canis_majoris123
   time : 14:53
   Date : 13 - 08 - 2019
*/
// I Love A Goswami
//https://codeforces.com/problemset/problem/230/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti s , n ;
    cin >> s >> n;
    pair<aakriti, aakriti> x[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i].first;
        cin >> x[i].second;
    }
    sort(x, x+n);
    for(int i = 0; i < n; i++)
    {
        if(s> x[i].first) s+=x[i].second;
        else
        {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES" ;

}
