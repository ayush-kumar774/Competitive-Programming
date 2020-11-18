#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti t, j;
    string s;
    cin >> t ;
    while(t--)
    {
        cin >> s;
        for(j = s.size() - 1; j >= 0; j--)
        {
            if(s[j] != '0')
            {
                break;
            }
        }
        for(aakriti i = j ; i >= 0 ; i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
}
