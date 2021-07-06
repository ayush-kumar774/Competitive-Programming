#include<iostream>
using namespace std;
int main()
{
	int n, k,r=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]>r)
		{
			r=arr[i];
		}
	}
	if(r>k)
	{
		cout<<r-k<<endl;
	}
	else
	cout<<"0"<<endl;
}
