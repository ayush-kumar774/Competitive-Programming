//https://codeforces.com/problemset/problem/41/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
/*   int flag{0} ;
   aakriti s , s2;
   cin >> s >> s2;
   for(int i = s.size()-1, j = 0; i>= 0, j<s2.size(); i--,j++)
   {
       if(s[i] != s2[j])
       {
           flag = 1;
           break;
       }
   }
   if(flag == 0)
   cout << "YES" << endl;
   else
    cout << "NO" << endl ; */
    aakriti s, s2;
    cin >> s >> s2;
    reverse(s.begin(), s.end());
    (s == s2 ? cout << "YES" << endl : cout << "NO" << endl );
}
