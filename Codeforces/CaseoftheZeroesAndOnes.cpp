//https://codeforces.com/contest/556/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
#define akri long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    akri number, countZero{0}, countOne{0};
    cin >> number ;
    aakriti s;
    cin >> s ;
    for(akri ayush = 0; ayush < s.size(); ayush++)
    {
        if(s[ayush] == '1')
            countOne++;
        else
            countZero++;
    }
    cout << abs(countZero-countOne);
}
