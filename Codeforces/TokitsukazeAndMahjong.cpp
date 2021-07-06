//https://codeforces.com/contest/1191/problem/B
#include<bits/stdc++.h>
using namespace std ;
#define aakriti string
int main()
{
    aakriti a , a1 , a2 ;
    cin >> a >> a1 >> a2 ;
    set<char> s ;
    s.insert(a[1]);
    s.insert(a1[1]);
    s.insert(a2[1]);
    vector<int> arr;
    arr.push_back(a[0]);
    arr.push_back(a1[0]);
    arr.push_back(a2[0]);
    sort(arr.begin(), arr.end());
    if(s.size() == 1)
    {
        if(a[0] == a1[0] and a1[0] == a2[0])
            cout << 0 ;
        else if (arr[0]+1 == arr[1] and arr[1]+1 == arr[2])
            cout << 0;
    }
    else if(s.size() == 3) or(s.size)
    {
        cout << 2 ;
    }
    else if(s.size() == 2 and a[0] == a1[0])
}
