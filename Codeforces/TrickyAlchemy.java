import java.util.* ;
public class TrickyAlchemy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        long a , b , x , y , z ;
        a = sc.nextLong() ;
        b = sc.nextLong() ;
        x = sc.nextLong() ;
        y = sc.nextLong() ;
        z = sc.nextLong() ;
        int yellow = 0 , blue = 0 ; 
        yellow += 2 * x ;
        yellow += y ;
        blue += 3 * z ;
        blue += y ;
        long ans = 0 ;
        if (yellow > a ) {
            System.out.println("True");
            ans += (yellow - a) ;
        }
        if (blue > b) {
            System.out.println("True") ;
            ans += (blue - b) ;
        }
        System.out.println(ans);
        sc.close();    
    }    
}
