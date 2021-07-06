//https://www.codechef.com/problems/TSORT
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int n{0} ;
    cin >> n;
    vector<long long int> v(n);
    for(auto &x : v)
    {
        cin >> x ;
    }
    sort(v.begin() , v.end());
    for(auto x : v)
    {
        cout << x << endl ;
    }
}
