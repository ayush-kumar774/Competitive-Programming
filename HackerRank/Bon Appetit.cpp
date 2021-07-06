#include<iostream>
using namespace std;
int main()
{
	int noc,dne,sum=0,fair=0;
	cin>>noc>>dne;
	int arr[noc], charged;
	for(int i=0; i<noc; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cin>>charged;
	sum-=arr[dne];
	sum/=2;
	if(charged-sum==0)
	{
		cout<<"Bon Appetit"<<endl;
	}
	else
	cout<<charged-sum<<endl;
}
