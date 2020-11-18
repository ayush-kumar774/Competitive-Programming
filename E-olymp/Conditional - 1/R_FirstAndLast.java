//package Competitive.E-Olymp.Conditional - 1;
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

import java.util.* ;


public class R_FirstAndLast {
 public static void main(String[] args) {
     Scanner sc = new Scanner(System.in) ;
     int digit = sc.nextInt() ;
     sc.close();
     int firstDigit = digit / 100 ;
     int lastDigit = digit % 10 ;
     if (firstDigit == lastDigit) {
         System.out.println("=") ;
     }
     else if (firstDigit > lastDigit) {
         System.out.println(firstDigit) ;
     }
     else if (firstDigit < lastDigit) {
         System.out.println(lastDigit) ;
     }
 }   
}