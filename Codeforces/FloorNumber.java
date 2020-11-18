import java.util.* ;
public class FloorNumber {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in) ;
                int testcases = sc.nextInt() ;
                for (int i = 0 ; i < testcases ; i++) {
                        int n = sc.nextInt() ;
                        int x = sc.nextInt() ;
                        if (n == 1 || n == 2) {
                                System.out.println("1") ;
                        }
                        else if ((n - 2) % x == 0) {
                                System.out.println( ( ( (n - 2) / x )+ 1 ) )  ;
                        }
                        else if ((n - 2) % x != 0) {
                                System.out.println( ( ( (n - 2) / x )+ 2 ) )  ;
                        }
                }
        }
}