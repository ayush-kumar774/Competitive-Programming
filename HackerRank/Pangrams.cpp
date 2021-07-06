// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin .tie(0);
    cout.tie(0);
    string str ;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    set<char> s ;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i] != ' ')
        {
            s.insert(str[i]);
        }
    }
   if(s.size() == 26) cout << "pangram" << endl ;
   else cout << "not pangram" << endl ; 
}