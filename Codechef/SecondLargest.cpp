//https://www.codechef.com/problems/FLOW017
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase{0} ;
    cin >> testcase ;
    while(testcase--)
    {
        vector<long long int>v(3) ;
        for(auto &x : v)
        {
            cin >> x ;
        }
        sort(v.begin() , v.end());
        cout << v[1] << endl ;
    }
}
