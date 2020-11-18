#include<bits/stdc++.h>
using namespace std;

int main(void){
int N,x,Q;

ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>N;
int arr[1001];

for(auto i=0;i<1001;i++){
arr[i]=0;
}

while(N--){
cin>>x;
arr[x]++;
}

cin>>Q;

while(Q--){
cin>>x;
if(arr[x]!=0) cout<<arr[x]<<"\n";
else cout<<"NOT PRESENT"<<"\n";
}

return 0;
}
