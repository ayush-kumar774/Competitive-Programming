//https://codeforces.com/problemset/problem/1203/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase ;
    cin >> testcase  ;
    bool ayush = true;
    while(testcase -- )
    {
        aakriti number, counter{0};
        cin >> number ;
        aakriti arr[number];
        for(int i = 0; i < number; i++) cin >> arr[i];
        for(int i = 0; i< number; i++)
        {
            if( (abs(arr[i] - arr[i - 1]) != 1) or (abs(arr[i] - arr[i - 1]) != number - 1) )
            {
                    ayush = false ;
                    break;
            }
        }
        if(ayush)
            cout << "NO" << endl ;
        else
            cout << "YES" << endl ;
    }
}
