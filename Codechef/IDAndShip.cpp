//https://www.codechef.com/problems/FLOW010
#include<bits/stdc++.h>
using namespace std;
#define aakriti char
#define ayush long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ayush testcase;
    cin >> testcase;
    while(testcase--)
    {
        aakriti a;
        cin >> a;
        a = tolower(a);
        if(a == 'b')
        {
            cout << "BattleShip";
        }
        else if(a == 'c')
        {
            cout << "Cruiser";
        }
        else if(a == 'd')
        {
            cout << "Destroyer";
        }
        else
        {
            cout << "Frigate";
        }
        cout << endl;
    }
}
