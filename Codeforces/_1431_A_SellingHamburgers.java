import java.util.* ;
public class _1431_A_SellingHamburgers
{
	public static void main ( String args[] )
	{
		Scanner sc = new Scanner (System.in) ;
		int testcases = sc.nextInt() ;
		for (int i = 1 ; i <= testcases ; i++ )
		{
			int n ;
			n = sc.nextInt() ;
			int arr[] = new int [n] ;
			for (int j = 0 ; j < n ; j++) {
				arr[j] = sc.nextInt() ;
			}
			Arrays.sort(arr);
			ArrayList <Integer> numbers = new ArrayList<Integer>() ;
			for (int k = 0 ; k < n ; k++) {
				numbers.add(arr[i] * (n - k)) ;
			}
			System.out.println(Collections.max(numbers));
		}
		sc.close();
	}
}

/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/