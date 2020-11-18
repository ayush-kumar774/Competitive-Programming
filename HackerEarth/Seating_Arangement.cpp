#include<stdio.h>
#include<iostream>
int main()
{
	int s,t,ch;
		scanf("%d",&t);
			for(int i=1;i<=t;i++)
	{
		scanf("%d",&s);
		ch=s%12;
		switch(ch)
		{
			case 0: s=s-11;
					printf("%d WS\n",s);
					break;
			case 1: s=s+11;
					printf("%d WS\n",s);
					break;
			case 2: s=s+9;
					printf("%d MS\n",s);
					break;
			case 11: s=s-9;
					printf("%d MS\n",s);
					break;
			case 3: s=s+7;
					printf("%d AS\n",s);
					break;
			case 10: s=s-7;
	 				printf("%d AS\n",s);
					break;
			case 4: s=s+5;
					printf("%d AS\n",s);
					break;
			case 9: s=s-5;
					printf("%d AS\n",s);
					break;
			case 5: s=s+3;
					printf("%d MS\n",s);
					break;
			case 8: s=s-3;
					printf("%d MS\n",s);
					break;
			case 6: s=s+1;
					printf("%d WS\n",s);
					break;
			case 7: s=s-1;
					printf("%d WS\n",s);
					break;
			}
	}
	return 0;
}
