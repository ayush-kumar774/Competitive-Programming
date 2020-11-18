//package Competitive.E-Olymp.Conditional - 1;
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

import java.util.* ;

public class Q_TheLevelOfEducationalAchievements {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in) ;
      int grade = sc.nextInt() ;
      sc.close();
      if(grade >= 1 && grade <= 3) {
          System.out.println("Initial");
      }
      else if(grade >= 4 && grade <= 6) {
        System.out.println("Average");
      }
      else if(grade >= 7 && grade <= 9) {
        System.out.println("Sufficient");
      }
      else if(grade >= 10 && grade <= 12) {
        System.out.println("High");
      }
  }  
}