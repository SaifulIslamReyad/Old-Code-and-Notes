for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print(len([j for j in range(n) for k in range(a[j]-j-2,n,a[j]) if a[j]*a[k]==j+k+2 and j<k]))
