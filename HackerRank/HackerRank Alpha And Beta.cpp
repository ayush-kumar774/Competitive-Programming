 #include<iostream>
 using namespace std;
int main()
{
   int n,i,j=0,big,secondbig;
   cin>>n;
   int array[n];
   for(i=0;i<n;i++)
   {
   	cin>>array[i];
   }
   big=array[0];
   for(i=1;i<n;i++)
   {
      if(big<array[i])
	  {
           big=array[i];
           j = i;
      }
   } 

   secondbig=0;
   for(i=1;i<n;i++)
   {
      if(secondbig <array[i] && array[i]!=big) 
          secondbig =array[i];
   }
   cout<<secondbig;  
}
