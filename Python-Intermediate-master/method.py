#class and static method
#2

#Class methods are methods within a class that only have access to class variables and other class methods. 
#Static methods are methods within a class that have no access to anything else in the class (no self keyword or cls keyword).
class person(object):

    pop = 50
    def __init__(self,name,age):
        self.name = name
        self.age = age
    @classmethod
    def getPopulation(cls):# The classMethod can access and modify class variables. It takes the class name as a required parameter
        return cls.pop
    @staticmethod
    def isElder(age): # staticMethod does not require the self parameter
        return age >=18
    
    def display(self):
        print(self.name, "is", self.age, "years old")

Person = person("Nemo", 19)
#Person.display()
#print(person.getPopulation())
print(person.isElder(21))