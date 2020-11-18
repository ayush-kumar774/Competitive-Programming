#include <iostream>
using namespace std;
 
int main(void) {
    
	int N, i;
	cin >> N;
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	cin >> numArray[i];
	}
	
	int sum = 0;
	// Write here the logic to add these integers:
    for ( i = 0; i<N; i++)
    {
        numArray[i] = numArray[i]*numArray[i];
        sum += numArray[i];
    }
    
    
   
	cout << sum << endl;  // Print the sum
    
	return 0;
}
