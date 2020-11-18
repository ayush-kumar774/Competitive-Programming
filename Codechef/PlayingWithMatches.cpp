#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	aakriti testcase;
	cin >> testcase;
	while(testcase--)
	{
		aakriti a , b ;
		cin >> a >> b ;
		aakriti sum = a + b ;
		aakriti l = 0 ;
		if(sum == 0) cout << 6 << endl ;
		else{
	        while(sum > 0)
		  {
			aakriti a = sum % 10 ;
			if(a == 0) l+= 6;
			if(a == 1) l+= 2;
			if(a == 2) l+= 5;
			if(a == 3) l+= 5;
			if(a == 4) l+= 4;
			if(a == 5) l+= 5;
			if(a == 6) l+= 6;
			if(a == 7) l+= 3;
			if(a == 8) l+= 7;
			if(a == 9) l+= 6;
			sum = sum / 10 ;
		  }
		  
		  cout << l << endl ;		
		}
		
		
	}
}