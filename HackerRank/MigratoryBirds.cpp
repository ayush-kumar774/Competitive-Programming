// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di


//https://www.hackerrank.com/challenges/migratory-birds/problem
#include<bits/stdc++.h>
using namespace std ;
int main()
{
	long long num ;
	cin >> num ;
	long long arr[5] = {0};
	while (num--)
	{
		int x ;
		cin >> x ;
		if(x == 1 ) arr[0]++ ;
		if(x == 2 ) arr[1]++ ;
		if(x == 3 ) arr[2]++ ;
		if(x == 4 ) arr[3]++ ;
		if(x == 5 ) arr[4]++ ;
	}
	int mx = 0 , index1 = 0 , index2 = 0 ;
	for(int i = 0 ; i < 5 ; i++)
	{
		if(arr[i] > mx) {
			mx = arr[i] ;
			index1 = i + 1 ;
		}
	}
	for(int i = 0 ; i < 5; i++)
	{
		if (arr[i] == mx ){
			index2 = i + 1 ;
		}
	}

	cout << min(index1 , index2 ) << endl ;
	
}
