//https://codeforces.com/problemset/problem/158/B
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
aakriti main()
{
    aakriti number,t, arr[5] = {0} ;
    cin >> number ;
    while(number--)
    {
       cin >> t;
       arr[t]++;
    }
    for(auto x : arr) cout << x << endl ;
    cout << arr[4] + arr[3] + (arr[2]* 2 + max ( arr[1] - arr[3] , 0) + 3) / 4;
    return 0 ;
}
