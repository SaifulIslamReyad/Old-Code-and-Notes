import math
def combination(n, r):
    if n < r:
        return 0 
    return math.factorial(n) // (math.factorial(r) * math.factorial(n - r))