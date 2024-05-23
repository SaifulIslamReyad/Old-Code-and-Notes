from collections import Counter
l=[]
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    d=dict(Counter(a))
    print(d)
    c=[0]*101
    for x in d:
        for y in d:
            c[x+y]+=min(d[x],d[y])
        break
    print(c)