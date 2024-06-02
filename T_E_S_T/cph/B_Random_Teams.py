def combination(n, r):
    if n < r:
        return 0
    if r == 0 or n == r:
        return 1
    r = min(r, n - r)  
    numer = 1
    denom = 1
    for i in range(1, r + 1):
        numer *= n
        denom *= i
        n -= 1
    return numer // denom

n,m=map(int, input().split())
maxi=combination( n-(m-1),2)
# cALculating minimum
b= n//m #b=6=33/5     
bb=n%m #3=33%5        
x=m-bb  #x=5-3=2       
# x*c(b) /// bb*c(b+1)      

mini= x* combination(b,2)+bb*combination((b+1),2)
print(mini, maxi)
