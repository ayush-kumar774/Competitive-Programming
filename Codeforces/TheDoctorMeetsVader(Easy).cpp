//http://codeforces.com/contest/1184/problem/B1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int no_of_spaceships, no_of_bases;
    cin >> no_of_spaceships >> no_of_bases;
    vector<int>V;
    for (int i = 0; i<no_of_spaceships; i++)
    {
        int x ;
        cin >> x ;
        V.push_back(x);
    }
    while(no_of_bases--)
    {
        long long int defensive_power, gold ;
        cin >>  defensive_power >> gold ;
        for(auto x:V)
        {
            if (x >= defensive_power)
            {

            }
        }
    }
}
