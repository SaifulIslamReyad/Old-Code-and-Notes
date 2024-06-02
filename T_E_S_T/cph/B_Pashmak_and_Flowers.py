n=int(input())
l=list(map(int, input().split()))
a=max(l)
b=min(l)
c= a-b
d=l.count(a)
f=l.count(b)
if a==b: print(c,int(n*(n-1)/2))
else:print(c,d*f)