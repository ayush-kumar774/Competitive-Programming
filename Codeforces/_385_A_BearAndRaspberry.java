import java.util.Scanner;
public class _385_A_BearAndRaspberry {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in) ;
                int n = sc.nextInt() ;
                int b = sc.nextInt() ;
                int arr [] = new int [n] ;
                for (int i = 0 ; i < n ;  i++) {
                        arr[i] = sc.nextInt() ;
                }
                int maxx = 0 ;
                for (int i = 0 ; i < n - 1 ; i++) {
                        if (arr[i] > arr[i + 1]) {
                                maxx = Math.max( (arr[i] - arr[i + 1] - b ) , maxx) ;
                        }
                }
                System.out.println(maxx);
                sc.close() ;
        }
}