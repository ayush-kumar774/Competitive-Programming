import java.util.* ;
public class Juicer {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in) ;
                int n , big = 0 , waste = 0 ;
                n = sc.nextInt() ; 
                big = sc.nextInt() ; 
                waste = sc.nextInt() ;
                int arr[] = new int [n] ;
                for (int i = 0 ; i < n ; i++) {
                        arr[i] = sc.nextInt() ;
                } 
                int ans = 0 ;
                int w = 0 ;
                for (int i = 0 ; i < n ; i++) {
                        if (arr[i] > big) continue ;
                        else {
                                w += arr[i] ;
                        }
                        if (w > waste) {
                                ans++ ;
                                w = 0 ;
                        }
                }
                System.out.println(ans) ;
        }
}package Competitive-Programming.Codeforces;

public orclass Juicer {
        
}
