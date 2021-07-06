#include<bits/stdc++.h>
using namespace std;
#define aakriti string
#define ayush long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ayush n , steps{0} ;
    cin >> n ;
    aakriti s , s2;
    cin >> s >> s2 ;
    for(int i = 0; i < s.size(); i++)
    {
        steps += min( ((int(s[i])- 48) - (int(s2[i])-48) + 10) % 10 , ( (int(s2[i])- 48) - (int(s[i]) - 48) +10) %10 ) ;
    }
    cout << steps << endl ;
}
