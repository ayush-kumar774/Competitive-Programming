//package Competitive.E-Olymp.Conditional - 1;
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

import java.util.* ;

public class Conditional2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        long a = sc.nextLong() ;
        sc.close(); 
        if (a < 10) {
            System.out.println( (a * a ) - (2 * a) + 4);
        }
        else{
            System.out.println( (a * a * a ) + 5 * a );
        }
    }    
}