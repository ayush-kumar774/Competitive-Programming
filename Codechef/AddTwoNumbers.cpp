//https://www.codechef.com/problems/FLOW001
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    int n;
    cin >> n ;
    vector<int> V (n);
    for(auto &x : V) cin >> x ;
    sort(V.begin(), V.end());
    for(auto x : V) cout << x << " ";
}
