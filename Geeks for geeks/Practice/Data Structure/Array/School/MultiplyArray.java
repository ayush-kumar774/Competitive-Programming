import java.util.*;
class MultiplyArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int testcases ;
        testcases = sc.nextInt() ;
        for (int t = 0 ; t < testcases ; t++) {
            int n , x , ans = 1 ;
            n = sc.nextInt() ;
            for (int i = 0 ; i < n ; i++) {
                x = sc.nextInt() ;
                ans *= x ;
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/