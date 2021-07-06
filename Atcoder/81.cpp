//https://atcoder.jp/contests/abc144/tasks/abc144_b
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti a, flag = 0 ;
        cin >> a ;
        for(int i = 1 ; i < 10 ; i++)
        {
                for(int j = 1 ; j < 10 ; j++)
                {
                        if(i * j == a) flag = 1 ;
                }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
}