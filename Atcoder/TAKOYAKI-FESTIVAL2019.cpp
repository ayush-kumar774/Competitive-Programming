//https://atcoder.jp/contests/abc143/tasks/abc143_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0; i < n; i++) { cin >> arr[i]; }
        long long int ans = 0 ;
        for(int i = 0; i < n; i++)
        {
                for(int j = i+1; j < n ;j++)
                {
                        int p = arr[i] * arr[j];
                        // cout << p << endl ;
                        ans += p ;
                }
        }
        cout << ans << endl ;
}