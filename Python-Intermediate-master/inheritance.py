
#INHERITANCE 

class Person():
    def __init__(self,name,age,food,drink):
        self.name = name
        self.age = age
        self.food = food
        self.drink = drink
    
    def intro(self):
        print("Hi, Im", self.name, " My age is ",self.age,"And I LOVE", self.food, "In Love With ",self.drink, "Boobies")
    
    def foods(self, food):
        self.food = food

class Kid(Person):
    def __init__(self,name,age,food,drink,fav="Cartoon"):
        super().__init__(name,age,food,drink)
        self.fav = fav
    
    def show(self, favour=True):
        if favour:
            print("Im ",self.name,"and",self.age,"my favourite food is",self.food,"and fav drink",self.drink, "\nI Love To Watch ",self.fav)
        else:
            print("BYE")

john = Person("John",21,"pizza","Milk-Shake")
john.foods("Burger.")
john.intro()

catlin = Kid("catlin", 12, "noodles" , "chocolate shake")
catlin.show()


