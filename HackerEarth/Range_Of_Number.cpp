#include <iostream>
using namespace std;
 
int main(void) {
 
	// Define the two integer variables
	int L,R;
	int i;
 
	// Get L and R from the user
	cin >> L >> R;
    
	// Write here the logic to print all integers between L and R
    for (int i = L; i<= R; i++)
    {
        cout << i << " ";
    }
 
 
    
	return 0;
}
