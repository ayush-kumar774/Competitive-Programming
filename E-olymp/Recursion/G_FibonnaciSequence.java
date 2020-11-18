//package Competitive.E-Olymp.Recursion;
import java.util.*;
public class G_FibonnaciSequence {
  public static void main(String[] args) {
      
    Scanner sc = new Scanner(System.in) ;
    long n = sc.nextLong() ;
    long ans = fib(n) ;
    System.out.println(ans);
    sc.close(); 
  }  
  private static long fib(long num) {
    if(num == 0 ) return 0 ;
    else if (num == 1) return 1 ;
    else {
        return fib(num - 1) + fib(num - 2);
    }
  }
}