//https://codeforces.com/contest/1/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

    long long l, b, a;
    cin >> l >> b >> a;

    cout << fixed << (long long)(ceil((double)l / a) * ceil((double)b / a));
    return 0;
}
/*
using namespace std;
int main(){
	long long int m,n,a,x,y;
	cin>>m;
	cin>>n;
	cin>>a;

	if(m%a==0){
		x=m/a;
	}
	else{
		x=m/a+1;
	}

	if(n%a==0){
		y=n/a;
	}
	else{
		y=n/a+1;
	}

	cout<<x*y;
	return 0;
}
*/
