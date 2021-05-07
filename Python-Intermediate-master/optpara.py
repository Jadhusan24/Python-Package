#optional parameters
#1


#lets make condition and kms optional para
class car(object):
    def __init__(self,make,model,year,condition="NEW",kms=0):   #assigned con="new" and remove down
        self.make = make
        self.model = model
        self.year = year
        self.condition = condition
        self.kms = kms
    
    def show(self, showall): #you can put showall=True and remove down
        if showall:
            print("This car is a %s %s from %s, it is %s and has %s kms" %(self.make,self.model,self.year,self.condition,self.kms))
        else:
            print("BYE")

BMW = car("BMW",2020,2020) #you can remove the 4th positional arg 
BMW.show(True)
