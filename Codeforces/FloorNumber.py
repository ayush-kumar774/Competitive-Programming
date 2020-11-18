testcases = int(input())
for i in range(testcases) :
        n , x = map(int, input().split())
        if (n == 1):
                print("1")
        elif (n == 2):
                print("1")
        elif ( (n - 2) % x == 0 ) :
                print( ( ( n - 2 ) // x ) + 1 )
        elif ( (n -2 ) % x != 0 ) :
                print( ( ( n - 2 ) // x ) + 2 )   