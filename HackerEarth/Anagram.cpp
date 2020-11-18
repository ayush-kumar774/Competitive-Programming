#include <bits/stdc++.h>

using namespace std;

int number_needed(string a, string b) {
   int p[26]={0},q[26]={0};
    for(int i=0;i<a.length();i++)
        p[a[i]-97]++;
    for(int i=0;i<b.length();i++)
        q[b[i]-97]++;
    int ans=0;
    for(int i=0;i<26;i++)
        ans+=abs(p[i]-q[i]);

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    }
    return 0;
}
