import java.util.*;
class LRA {
        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                int l , r , a ;
                l = sc.nextInt() ;
                r = sc.nextInt() ;
                a = sc.nextInt() ;
                if (l == r) {
                        System.out.println( (2 * l) + ( (a / 2) * 2) ) ;
                }
                else if (l > r) {
                        int need = l - r ;
                        int b = Math.min(need, a);
                        r += b ;
                        a -= b ;
                        if (l == r) {
                                System.out.println( (2 * l) + ( (a / 2) * 2) ) ;
                        }
                        else {
                                System.out.println(2 * r) ;
                        }
                }
                else if (l < r) {
                        int need = r - l ;
                        int b = Math.min(need, a);
                        l += b ;
                        a -= b ;
                        if (l == r) {
                                System.out.println( (2 * l) + ( (a / 2) * 2) ) ;
                        }
                        else {
                                System.out.println(2 * l) ;
                        }
                }
                sc.close() ;
        }
}