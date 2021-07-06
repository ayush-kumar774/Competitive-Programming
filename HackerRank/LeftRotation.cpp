#include <bits/stdc++.h>
using namespace std ;

// void leftRotatebyOne (int arr[] , int n) {
//     int temp = arr[0] ;
//     for(int i = 1 ; i < n ; i++)
//         arr[ i - 1 ] = arr[ i ] ;
//     arr[ n - 1 ] = temp ;  
// }

// void leftRotate (int arr[] , int n, int d) {
//     int temp[d] ;
//     for(int i = 0 ; i < d ; i++)   
//         temp[i] = arr[i] ;

//     for(int i = d ; i < n ; i++)
//         arr[ i - d ] = arr[ i ] ;

//     for(int i = 0 ; i < d ; i++)
//         arr[n - d + i] = temp[i] ;
// }

void reverse (int arr[], int low , int high) {
    while ( low < high ) {
        swap(arr[low], arr[high]) ;
        low++ ;
        high-- ;
    }
}

void leftRotate (int arr[], int n, int d) {
    // reverse (arr , 0 , d - 1 ); 
    // reverse (arr , d, n - 1 ); 
    // reverse (arr , 0, n -1 ); 
    reverse (arr, arr + d) ;
    reverse (arr + d , arr + n) ;
    reverse (arr , arr + n) ;
}


int main()
{
    int n , d ;
    cin >> n >> d ;
    int arr[n] ;
    for(auto & x : arr) cin >> x ;
    
    // for(int i = 0 ; i < d ; i++)
    // {
    //     leftRotatebyOne(arr, n) ;
    // }
    leftRotate(arr, n , d) ;
    for(auto x : arr) cout << x << " ";
    cout << endl ;
}