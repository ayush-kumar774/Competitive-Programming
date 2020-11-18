//https://codeforces.com/contest/1206/problem/0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m ;
    cin >> n ;
    vector <int> v(n);
    for(auto &x : v) cin >> x ;
    cin >> m;
    vector<int> v1(m);
    for(auto &x: v1) cin >> x ;
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    cout << v[n - 1] << " " << v1[m - 1];
}
