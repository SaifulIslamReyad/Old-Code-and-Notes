l=[2]
l[0]=1      #supported
print(l)

l=[]
l[0]=1      #not supported
print(l)


l=[1,2,3,34]
print(l)
l=[1]           #supported
print(l)
l=[]
print(l)



L="abcdefghijkl"
for i in range(len(L)):
    if L[i]=='a' or L[i]=='l':
        L=L.replace(L[i],'z')
print(L)
# we can do the same thing as L[i]='z' can do 