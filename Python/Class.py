# This file explains how to create a class and its objet
# use of __init__ method

class myClass:
    #The __init__() function is called automatically every time the class is being used to create a new object.
    def __init__(self,name, age):
        self.name=name
        self.age=age

obj_of_class = myClass("Amar",26)

print(obj_of_class.name)
print(obj_of_class.age)

