#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	if(is_prime(n)) {
		cout<<"1"<<endl<<n<<endl;
		return 0;
	}
	for(int i=n-2;i>=1;i-=2){
		if(is_prime(i)){
			int res=n-i;
			if(res==2){
				cout<<"2"<<endl;
				cout<<res<<" "<<i<<endl;
				return 0;
			}
			for(int j=2;j<=res;j++){
				if(is_prime(j)&&is_prime(res-j)){
					cout<<"3"<<endl;
					cout<<j<<" "<<res-j<<" "<<i<<endl;
					return 0;
				}
			}
		}
	}
}
