//https://codeforces.com/problemset/problem/427/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase, number, minus_{0}, plus_{0};
    cin >> testcase;
    while(testcase--)
    {
        cin >> number ;
        if(number == -1)
        {
            if(plus_ > 0)
            {
                plus_--;
            }
            else
            minus_++;
        }
        else
        {
            plus_ += number;
        }
    }
    cout << minus_ << endl ;
}
