class Pupil:
    def __init__(self,phy,chem,math,bio):
        self.phyMarks= phy
        self.chemMarks=chem
        self.mathMarks=math
        self.bioMarks=bio
        self.percentage= (self.phyMarks+self.chemMarks+self.bioMarks+self.mathMarks)/4
        # but its wrong
        

    def getPercentage(self):
        return  (self.phyMarks+self.chemMarks+self.bioMarks+self.mathMarks)/4
        # its correct
        # but another way to do this is using making it property to make getPercentage() into a attribute 
    @property
    def PERCENTAGE(self):
        return  (self.phyMarks+self.chemMarks+self.bioMarks+self.mathMarks)/4

s1= Pupil(88,87,89,88)
s1.phyMarks=0
s1.chemMarks=10
s1.mathMarks=0
s1.bioMarks=10

print(s1.percentage)
print(s1.getPercentage())
print(s1.PERCENTAGE)
