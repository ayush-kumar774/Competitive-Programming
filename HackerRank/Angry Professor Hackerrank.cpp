#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, s;
		cin >>n >> s ;
		int count = 0;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if(arr[i] <= 0)
			{
				count++;
			}
		}
		if(count < s)
		{
			cout << "YES" << endl;
		}
		else
		cout << "NO" << endl;
	}
}
