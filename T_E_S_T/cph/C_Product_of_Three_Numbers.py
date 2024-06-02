for _ in range(int(input())):
    n=int(input())
    l=[]
    for i in range(2,int(n**0.5)):
        
        if n%i==0:
            l.append(i)
            m=n//i
            for  j in range(i+1,int((m)**0.5)+1):
                if m%j==0 and j!=m//j:
                    l.append(j)
                    l.append(m//j)
                    break
            if len(l)==3:
                break
    if len(l)==3:
        print("YES")
        for i in l:
            print(i , end=' ')
        print()
    else: print("NO")
