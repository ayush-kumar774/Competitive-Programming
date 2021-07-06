#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	int array2[n];
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		array2[i]=(array[i]/5)+1;
		array2[i]=(array2[i])*5;
	}
    for(int i=0; i<n; i++)
    {
    	if((array2[i]-array[i])<3 && array[i]>=38)
    	{
    		array[i]=array2[i];
		}
		if(array[i]<38|| (array2[i]-array[i])==3)
		{
			array[i]=array[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	/*
	#include<iostream>
using namespace std;

int main()
{
    int n, marks, x;
    cin>>n;
    while(n--)
    {
        cin>>marks;
        x=marks/5;
        if(marks<38)
        cout<<marks<<endl;
        else if((5*(x+1)-marks)<3)
        cout<<5*(x+1)<<endl;
        else
        cout<<marks<<endl;
        x=1;
    }
    
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>temp;
    while(cin>>n)
    {
        if(n<38)
            cout<<n<<endl;
        else if(n%5 >= 3)
            cout<<n+ (5-n%5)<<endl;
        else
            cout<<n<<endl;

    }
    return 0;
}*/
}
