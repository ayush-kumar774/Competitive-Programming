// package Competitive.E-Olymp.Conditional - 1;
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

import java.util.* ;
public class Conditional3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        long x = sc.nextLong() ;
        sc.close(); 
        if (x <= 7 && x >= -4) {
            System.out.println( (x * x ) - (3 * x) );
        }
        else if ( x < -4)
        {
            System.out.println( 5 + x );
        }
        else if (x > 7){
            System.out.println( (x * x * x ) + 2 * x );
        }
    }    
}