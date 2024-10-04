class Country:
    def desh(self):
        print("banngladesh")
        

class Car:
    def start(self):
        print(self.name ,self.cost,"enginer started")
    def stop(self):
        print(self.name,self.cost, "engine stopped")

class ToyotaCar(Car):
    def __init__(self,name,cost):
        self.name= name
        self.cost=cost
    
class Fortuner(ToyotaCar,Country):
    def __init__(self,cost,name="fortuner"):
        self.name=name
        self.cost=cost

a= Fortuner(1212)
a.start()
a.desh()
