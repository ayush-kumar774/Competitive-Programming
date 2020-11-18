import java.util.* ;
public class _1426_B_SymmetricMatrix {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in) ;
                int testcases = sc.nextInt() ;
                for (int i = 0 ; i < testcases ; i++) {
                        int n = sc.nextInt() ;
                        int m = sc.nextInt() ;
                        int counter = 0 ;
                        for (int j = 0 ; j < n ; j++) {
                                int x1 , y1 , x2 , y2 ;
                                x1 = sc.nextInt() ;
                                y1 = sc.nextInt() ;
                                x2 = sc.nextInt() ;
                                y2 = sc.nextInt() ;
                                if (y1 == x2) {
                                        counter++ ;
                                }
                                else if (x1 == y2) {
                                        continue ;
                                }
                        }
                        if (m % 2 == 1) {
                                System.out.println("NO") ;
                        }
                        else if (counter >= 1 && m % 2 == 0) {
                                System.out.println("YES");
                        }
                        else {
                                System.out.println("NO");
                        }      
                }
                sc.close();
        }
}