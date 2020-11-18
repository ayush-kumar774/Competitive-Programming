import java.util.* ;
public class _1426_C_IncreaseAndCopy {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in) ;
                int testcases = sc.nextInt() ;
                for (int i = 0 ; i < testcases ; i++) {
                        int n = sc.nextInt() ;
                        int ans = 999999999 ;
                        for (int j = 1 ; j * j <= n ; j++) {
                                ans = Math.min(ans,  ( (j - 1) + ( ( n - j ) + j - 1) / j) );
                        }   
                        System.out.println(ans);   
                }
                sc.close();
        }
}