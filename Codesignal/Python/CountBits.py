import math 
def countBits(n):
        return int((math.log(n) /math.log(2)) + 1)

print(countBits(5))