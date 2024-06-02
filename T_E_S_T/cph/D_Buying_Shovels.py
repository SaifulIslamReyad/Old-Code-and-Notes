for _ in range(int(input())):
    n,k=map(int, input().split())
    if n<=k:print(1);continue
    ans=1
    for i in range(2,int(n**0.5)+1):
        if n%i==0 : 
            x=n//i
            if x<=k and i<=k:
                ans=max(ans,x,i)
            elif i<=k : ans=max(ans,i)
    print(n//ans)