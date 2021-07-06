//https://codeforces.com/contest/66/problem/B
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti number ;
    cin >> number ;
    aakriti arr[number], ans = 1 ;
    for(int i = 0; i <number ; i++)
        cin >> arr[i] ;
    for(int i = 0; i < number; i++)
    {
        aakriti cnt = 1 ;
        for(int j = i -1; j >= 0; j--)
        {
            if(arr[j] <= arr[j + 1])
                cnt++;
            else
                break;
        }
        for(int j = i + 1; j < number; j++)
        {
            if(arr[j] <= arr[j - 1])
                cnt++;
            else
                break;
        }
        ans = max(ans, cnt);
    }
    cout << ans ;
}
