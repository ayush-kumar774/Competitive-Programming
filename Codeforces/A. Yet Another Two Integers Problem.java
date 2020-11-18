import java.util.*;
class YetAnotherTwoIntegersProblem {
        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                int testcases ;
                testcases = sc.nextInt() ;
                for (int i = 0 ; i < testcases ; i++) {
                        int a , b ;
                        a = sc.nextInt() ;
                        b = sc.nextInt() ;
                        int res = Math.abs(a - b) ;
                        int ans = res / 10 ;
                        if (ans * 10 == res) {
                                System.out.println(ans) ;
                        }
                        else {
                                System.out.println(ans + 1) ;
                        }
                }
                sc.close();
        }
}