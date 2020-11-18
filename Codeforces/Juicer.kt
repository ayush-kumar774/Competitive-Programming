import java.util.*
fun main(args: Array<String>) {
val sc = Scanner(System.`in`)
val testcases = sc.nextInt()
for (i in 0 until testcases) {
        val n = sc.nextInt()
        val x = sc.nextInt()
        if (n == 1 || n == 2) {
                println("1")
        } 
        else if ((n - 2) % x == 0) {
                println((n - 2) / x + 1)
        } 
        else if ((n - 2) % x != 0) {
                println((n - 2) / x + 2)
        }
}
        sc.close()
}