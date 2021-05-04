# A function is a set of statements that take inputs, do some specific computation and produces output

# To Create function
# method1


def sayHello(name='zayn'):
    print(f'Hello {name}')

# method2


def evenOdd(x):
    if (x % 2 == 0):
        print "even"
    else:
        print "odd"


evenOdd(2)
evenOdd(3)


# Return The values
def getSum(num1, num2):
    total = num1 + num2
    return total

 # Lambda functions are small functions usually not more than a line


def getSum(num1, num2): return num1 + num2


print(getSum(10, 3))


# we do not use curly brackets
