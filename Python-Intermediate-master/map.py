#map functino
#3

#The map function can be used to apply a function to every element in a given list. For example, 
# if we wanted to apply a function f1 to a list of numbers

li = [1,2,3,4,5]

def func(a):
    return a * a

'''NewList = []     #the Normal method using for loop
for a in li:
    NewList.append(func(a))'''

#using map func
print(list(map(func,li)))   #done with one line