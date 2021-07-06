//http://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cin >> str1 ;
    cin >> str2 ;
    int result = strcmpi ( str1, str2 ) ;
    cout << result << endl ;
}
