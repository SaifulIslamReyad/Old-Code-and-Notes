class Complex:
    def __init__(self,real,img):
        self.real=real
        self.img= img
    def printNum(self):
        print(str(self.real) + "i + " + str(self.img )+ "j")
    def __add__(c1,c2):
        return Complex(c1.real+c2.real , c1.img+c2.img)
    def __sub__(c1,c2):
        return Complex(c1.real-c2.real , c1.img-c2.img)
        

c1= Complex(2,3); c2= Complex(3,2)

c3=c1+c2
c3.printNum()

# this is called DUNDER func
# __sub__
# __mul__
# __mod__
# __add__
# like all of the followings have diffferent meanings
#       1. 2+2 
#       2. "hello" + "world"
#       3. [1,2,3] + [ 2,2,2]
# a+b means a.add(b)
# __init__ is also a dunder func
# https://python.org dunder functions
