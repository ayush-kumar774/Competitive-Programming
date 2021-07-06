//package Competitive.E-Olymp.Conditional - 1;
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

import java.util.* ;


public class S_EvenOrOddNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int a  = sc.nextInt();
        int b  = sc.nextInt();
        int c  = sc.nextInt();
        int evenCounter = 0 , oddCounter = 0 ;
        sc.close();
        if(a % 2 == 0) {
            evenCounter++ ;
        }
        if (a % 2 != 0) {
            oddCounter++ ;
        }
        if (b % 2 == 0) {
            evenCounter++ ;
        }
        if (b % 2 != 0 ) {
            oddCounter++ ;
        }
        if (c % 2 == 0) {
            evenCounter++ ;
        }
        if (c % 2 != 0 ) {
            oddCounter++ ;
        }
        // System.out.println("Even " +evenCounter);
        // System.out.println("ODD " +oddCounter);
        if(evenCounter > 0 && oddCounter > 0 ) {
            System.out.println("YES");
        } 
        else {
            System.out.println("NO");
        }
    }    
}