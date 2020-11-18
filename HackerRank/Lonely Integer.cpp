#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    unordered_map<int, int> mp ;
    int arr[n] ;
    for(auto &x : arr) cin >> x ;
    
    for(int i = 0 ; i < n; i++)
        mp[arr[i]]++;

    for(auto x : mp)
    {
        if(x.second == 1){
            cout << x.first << endl ;
            break ;
        }
    }

}