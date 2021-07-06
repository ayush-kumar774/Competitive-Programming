//https://www.codechef.com/problems/PRB01
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        aakriti number , cnt{0};
        cin >> number ;
        for(int i = 2; i <= sqrt(number); i++)
        {
            if(number%i == 0)
            {
                cnt++;
            }
        }
        if(cnt == 0)
            cout << "yes";
        else
            cout << "no";
        cout << endl ;
    }
}
