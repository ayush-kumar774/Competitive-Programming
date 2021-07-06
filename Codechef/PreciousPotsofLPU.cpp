//https://www.codechef.com/CYAU2019/problems/ARROTATE
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        aakriti pots , no_broken ;
        cin >> pots >> no_broken ;
        list<int> V(pots);
        for(auto &x : V) cin >> x ;
        for(int i = 0; i < no_broken; i++)
        {
            int temp;
            cin >> temp;
            V.remove(temp);
            V.push_back(temp);
        }
        for(auto x : V)
            cout <<x << " ";
        cout << endl;
    }
}
