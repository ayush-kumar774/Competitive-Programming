import java.util.Scanner;

class Main {
        public static void main(String[] args) {
                int a, b, h;
                Scanner sc = new Scanner(System.in);
                a = sc.nextInt();
                b = sc.nextInt();
                h = sc.nextInt();
                System.out.println((a + b) * (h / 2));
                sc.close();
        }
}
