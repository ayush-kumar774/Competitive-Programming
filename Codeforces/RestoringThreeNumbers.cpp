#include<bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define lol long long int
int main()
{
	lol array[4] ;
	for (int i = 0 ; i <= 3; i++)
	cin >> array[i] ;
	sort(array, array+4);
	for (int i = 0 ; i <= 2; i++)
	cout << array[3] - array[i] << " " ;
}
