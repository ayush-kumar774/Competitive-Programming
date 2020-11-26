import java.util.* ;
public class A_AdjacentReplacement
{
	public static void main ( String args[] )
	{
		Scanner sc = new Scanner (System.in) ;
		int testcases = 1 ;
		// testcases = sc.nextInt() ;
		for (int i = 1 ; i <= testcases ; i++ )
		{
			int n = sc.nextInt() ;
			int arr[] = new int [n] ;
			for (int j = 0 ; j < n ; j++)
			{
				arr[j] = sc.nextInt() ;
			}	
			for (int j = 0; j < n ; j++)
			{
				if (arr[j] % 2 == 0) 
				{
					arr[j] = arr[j] - 1 ;
				}
				System.out.print(arr[j] + " ") ;
			}
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