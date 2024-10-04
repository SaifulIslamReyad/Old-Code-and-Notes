class Car:
    def __init__(self,name):
        self.name=name
        

class Toyota(Car):
    def __init__(self,cost,name):
        self.cost=cost
        super().__init__(name)

a= Toyota(1212, "fortuner")

print(a.name)
