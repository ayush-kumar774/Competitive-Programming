//https://www.codechef.com/problems/EXAM1
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
#define akriti while
#define ayush string
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase{0} ;
    cin >> testcase ;
    akriti(testcase--)
    {
        aakriti number{0} , cnt{0} ;
        cin >> number ;
        ayush s , s1 ;
        cin >> s ;
        cin >> s1 ;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i] == s1[i])
                cnt++ ;
        }
        cout << cnt << endl ;
        cnt = 0 ;
    }
}
