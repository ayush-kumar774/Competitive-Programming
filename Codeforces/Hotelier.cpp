//https://codeforces.com/contest/1200/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
#define ayush long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ayush noOfelements, arr[10] = {0};
    cin >> noOfelements;
    aakriti s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'L')
        {
            for(int j = 0; j < 10; j++)
            {
                if(arr[j] == 0)
                {
                    arr[j] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R')
        {
            for(int j = 9 ; j >= 0; j--)
            {
                if(arr[j] == 0)
                {
                    arr[j] = 1;
                    break;
                }
            }
        }
        else
        {
            arr[s[i]-'0'] = 0;
        }
    }
    for(int i = 0; i < 10; i++)
        cout << arr[i];
    return 0;
}
