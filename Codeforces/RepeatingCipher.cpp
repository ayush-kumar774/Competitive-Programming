//https://codeforces.com/problemset/problem/1095/A
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define aakriti long long int
int main()
{
    //abbcccddddeeeeeffffffggggggghhhhhhhhiiiiiiiiijjjjjjjjjj
	aakriti n , counter {0} ;
	cin >> n;
	string s;
	cin >> s;
    for(int i = 1 ; i <= n ; i++)
    {
        cout << s[i - 1] ;
        if(i == 2) i += 3 ;
        if(i == 6) i += 3 ;
        if(i == 10) i += 4 ;
        if(i == 15) i += 5 ;
        if(i == 21) i += 6 ;
        if(i == 28) i += 6 ;
        if(i == 35) i += 8 ;
        if(i == 44) i += 10;
    }
}
