//https://codeforces.com/problemset/problem/1203/B
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        aakriti k , counter{0};
        cin >>  k ;
        vector<aakriti>v(4*k);
        for(auto &x: v)
            cin >> x ;
        sort(v.begin(), v.end());
        aakriti area = v[0]*v[4*k-1];
        for(int i = 0; i < 4*k ; i = i+ 2)
        {
            if( v[i] * v[4*k -1 - i] != area or v[i] != v[i + 1] )
            {
                counter++;
            }
        }
        if(counter > 0)
            cout << "NO" << endl ;
        else
            cout << "YES" << endl ;
    }
}
