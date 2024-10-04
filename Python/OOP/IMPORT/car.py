class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

    def display_info(self):
        print(f"{self.year} {self.make} {self.model}")

def main():
    my_car = Car("Toyota", "Corolla", 2022)
    my_car.display_info()

if __name__ == "__main__":
    main()
