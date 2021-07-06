import java.util.Scanner;

public class A1452RobotProgram{
        public static void solve() {
                Scanner sc = new Scanner(System.in);
                int x = sc.nextInt();
                int y = sc.nextInt();
                int ans = Math.min(x, y) ;
                x -= ans;
                y -= ans;
                ans *= 2;
                if (x == y && y == 0) {
                        System.out.println(ans);
                }
                else if (x != 0) {
                        System.out.println((ans + ((x * 2 ) - 1)));
                }
                else if (y != 0) {
                        System.out.println((ans + ((y * 2 ) - 1)));
                }
        }
        public static void main(String[] args) {
                Scanner s = new Scanner(System.in); 
                int testcases = s.nextInt() ;
                for (int i = 1 ; i <= testcases ; i++) {
                        solve();
                }              
        }
}