#include <bits/stdc++.h>
using namespace std;

class maxLead{
    public:
        int player = -1;
        int lead = -1;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, cummA = 0, cummB = 0;
    cin >> n;
    
    maxLead m1;
    
    while(n--){
        int A, B;
        cin >> A >> B;

        cummA += A;
        cummB += B;
        
        if(cummA > cummB){
            if(cummA - cummB >= m1.lead){
                m1.player = 1;
                m1.lead = cummA - cummB;
            }
        }else if(cummB - cummA >= m1.lead){
            m1.player = 2;
            m1.lead = cummB - cummA;
        }
        
    }
    cout << m1.player << " " << m1.lead;
    return 0;
}
