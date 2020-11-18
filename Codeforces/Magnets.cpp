//https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , temp{0};
    cin >> n ;
    vector<long long int> v(n);
    for(auto &x : v)
    {
        cin >> x;
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] != v[i+1])
            temp++ ;
    }
    cout << temp ;
}
