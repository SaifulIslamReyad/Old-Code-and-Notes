class car:
    def __init__(self,index,name,cost,color):
        self.name= name
        self.color=color
        self.cost=cost
    

carList= []
for i in range (0,10):
    carList.append( car(i,"bmw",i*1000,"red") )
print(carList[4].cost)

print(carList[2].cost)
del carList[2].cost
# print(carList[2].cost)

