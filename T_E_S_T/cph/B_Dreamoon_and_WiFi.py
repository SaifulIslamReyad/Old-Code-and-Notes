import math
s1=input()
s2=input()
s=s1.count("+")-s1.count("-")
ss=s2.count("+")-s2.count("-")
x=s2.count("?") #4
# print("x",x) ################
lth=2**x #16
# print("lth",lth) ################
val=abs(s-ss) #2
# print("val",val) ################
l=[] 
if x%2==0:
    for i in range(0,x+1,2):
        l.append(i)
        l.append(i*-1)
else:
    for i in range(1,x+1,2):
        l.append(i)
        l.append(i*-1)
# print(l) ##########
if val not in l: print("0.000000000000") 
else:
    # a=x-val #2
    z=(x+val)//2
    y=x-z
    # if val==0: a=x//2 ; val = x//2
    # print("a",a) ###########
    #facta,factval

    kotobar=math.factorial(x)//(math.factorial(z)*math.factorial(y))
    proba=kotobar/lth
    print("{:.12f}".format(proba))