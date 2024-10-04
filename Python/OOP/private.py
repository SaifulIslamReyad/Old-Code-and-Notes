class account:
    def __init__(self,acNo,acPassword) :
        self.acNo=acNo
        self.__acPassword= acPassword
        # made it private by __ prefix
    def resetPass(self,newPassword):
        self.__acPassword=newPassword
        print("password changed")
        
    def getPassword(self):
        print(self.__acPassword) 

ac1= account(12012,"okbye12")
ac1.resetPass("helloHi12")
ac1.getPassword()
