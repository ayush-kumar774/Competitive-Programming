// https://codeforces.com/problemset/problem/1316/A
#include <bits/stdc++.h>
using namespace std ;
void solve()
{
    int n , sum = 0 , maxx;
    cin >> n >> maxx ; 
    while(n--) {
        int x ;
        cin >> x ;
        sum += x ;
    }
    // v[0] = maxx ;
    // sum2 = maxx ;
    // int s = sum - maxx ;
    // if (s % ( v.size() - 1 ) == 0) {
    //     cout << maxx << " " ;
    //     for(int i = 1 ; i < v.size() ; i++)
    //         cout << s / (v.size() - 1) << " ";
    //     cout << endl ;
    // }
    // else
    // {
    //     cout << maxx << " " ;
    //     for(int i = 1 ; i < v.size() - 1; i++)
    //     {   
    //         cout << s / (v.size() - 1) << " ";
    //         sum2 += s / (v.size() - 1)  ;
    //     }
    //     cout << sum - sum2 << endl ; 
    // }

    if(maxx <= sum) {
        cout << maxx << endl ;
    }
    else
    {
        cout << sum << endl ;
    }
    
}
int32_t main()
{
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}
