    #include <bits/stdc++.h>
    using namespace std;
     
//     int main() {
//             ios_base::sync_with_stdio(0);
//             cin.tie(0);
            
//             int t;
//             cin >> t;
//             while (t--) {
//                     int n;
//                     cin >> n;
       
//                     int wrong = 0;
//                     int odd_pe_even = 0, even_pe_odd = 0;
//                     vector<int> v(n);
                    
//                     for (int i = 0; i < n; i++) {
//                             cin >> v[i];
//                             if (i % 2 != v[i] % 2) {
//                                     wrong++;
//                                     if (i % 2 && v[i] % 2 == 0) odd_pe_even++;
//                                     if (i % 2 == 0 && v[i] % 2) even_pe_odd++;
//                             }
//                     }
     
//                     if (wrong % 2) cout << -1 << endl;
//                     else {
//                             if (odd_pe_even == even_pe_odd) cout << wrong / 2 << endl;
//                             else cout << -1 << endl;
//                     }
//             }
//             return 0;
//     }
     
const int N = 100031;
 
int tests,n,c[N];
 
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", sttextdout);
  ios_base::sync_with_stdio(0);
  // cin.tie(0);
 
  cin>>tests;
  for (;tests;--tests){
	 cin>>n;
	 c[0]=c[1]=0;
	 for (int i=0;i<n;i++){
		 int val;
		 cin>>val;
		 if (val%2==i%2)
			 continue;
		 c[val%2]++;
	 }
	 if (c[0]!=c[1])
		 cout<<-1<<endl;
	 else
		 cout<<c[0]<<endl;
  }
 
 
  cin.get(); cin.get();
  return 0;
}