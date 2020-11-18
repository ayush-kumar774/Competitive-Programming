//https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
int main()
{
    aakriti s ;
    cin >> s ;
    int counter{0};
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' or s[i] == '7')
            counter++;
    }
 //   cout << counter << endl;
    if(counter == 4 or counter == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
