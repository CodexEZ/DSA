class Person:
    def __init__(self):
        self.__name = "aswin"
        print(self.name)
    def myfunc(self):
        print(self.name)
class Child(Person):
    def __init__(self):
        super().__init__()
        print("End")
    def myfunc(self):
        print("Child")
p1 = Person()
p1.name = "kuku"
p1.myfunc()

    
