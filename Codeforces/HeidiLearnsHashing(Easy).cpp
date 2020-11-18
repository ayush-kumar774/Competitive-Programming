//http://codeforces.com/contest/1184/problem/0
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n%2==0)cout<<"NO";
	else{
	    if(n<5){
	        cout<<"NO";
	    }
	    else{
	        cout<<1<<" "<<(n-3)/2;
	    }
	}
	return 0;
}
