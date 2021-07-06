// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di
import java.util.* ;

public class Conditional1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int a = sc.nextInt() ;
        sc.close(); 
        if (a < 5) {
            System.out.println( (a * a ) - (3 * a) + 4);
        }
        else{
            System.out.println(a + 7);
        }
    }
}