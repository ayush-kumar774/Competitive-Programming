testcases = int(input()) 
while (testcases!=0):
    n = int(input())
    fact = 1
    while(n != 1) :
        fact = fact * n
        n = n - 1
    print(fact)
    testcases = testcases - 1
    