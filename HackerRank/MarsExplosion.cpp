#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int count = 0 ;
    string s1 ;
    cin >> s1 ;
    for (int i = 0; i < s1.size(); i += 3)
    {
       if( s1[i] != 'S') count++;
       if (s1[i + 1] != 'O' ) count++;  
       if (s1[i + 2] != 'S') count++ ;
    }
    cout << count << endl ;

}