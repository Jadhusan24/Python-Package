#filter functions 
#4

#The filter function will pass every element of the given list into a function that returns a Boolean value

def isOdd(a):
    return a % 2 != 0

def add7(a):
    return a + 7

#a = [1,2,3,4,5,6,7,8,9,10,] 
#b = list(filter(isOdd,a))
#c = list(map(filter(add7,a)))


#filter
def isAOne(x):
    return x == 1

nums = [1,1,6,7,8,0,1,1]

newList = list(filter(isAOne,nums))

# newList is [1,1,1,1]