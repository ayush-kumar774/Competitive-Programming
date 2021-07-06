//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti number, score, countPlayers{0};
    cin >> number >> score ;
    aakriti arr[number];
    for(aakriti i = 0; i < number; i++)
           cin >> arr[i];
    for(aakriti i = 0; i < number; i++)
    {
        if(arr[i] >= arr[score - 1] and arr[i] != 0)
        {
            countPlayers++ ;
        }
    }
    cout << countPlayers;
}
