//https://codeforces.com/problemset/problem/707/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a{0} , b{0} , count{0};
    cin >> a >> b ;
    char arr[a][b];
    for(int i = 0 ; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 'W' or arr[i][j] == 'G' or arr[i][j] == 'B' )
            {
                count++;
            }
        }
    }
    if(count == a*b)
        cout << "#Black&White";
    else
        cout << "#Color";
}
