class Student:
    # name= "chatro"
    # age=23
    # valueless
    college= "hatem"
    # def __init__(self) :
    #     self.name="matro"
    # in python only one constructor can be there
    @staticmethod
    def PrintCollege():
        print("college is", Student.college)
    
    def __init__(self,name="chatro",age=22) :
        self.name=name
        self.age=age
        Student.college="amrito"
        self.__class__.college="bm"

    def hello(self):
        print("hello",self.name)
    
    @classmethod
    def changeCollege(cls, college):
        cls.college= college

s1=  Student()
print("s1.name and s1.age ",s1.name , s1.age)
s2= Student("fahad",14)
print("s2.name and s2.age",s2.name , s2.age)
s1.college= "model"
print("s1.college, s2.college",s1.college, s2.college)
print(Student.college)
s2.hello()
Student.PrintCollege()
Student.changeCollege("islamia")
Student.PrintCollege()
