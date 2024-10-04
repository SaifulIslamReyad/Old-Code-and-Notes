class Student:
    def __init__(self, name):
        self._name = name

    # Getter for name
    @property
    def name(self):
        return self._name

    # Setter for name
    @name.setter
    def name(self, new_name):
            self._name = new_name
    

student = Student("Alice")
print(student.name)  # Output: Alice

student.name = "Bob"
print(student.name)  # Output: Bob

