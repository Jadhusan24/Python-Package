# Dictionary in Python is an unordered collection of data values, used to store data values like a map.

# To create a Dictionary
person = {
    'first_name': 'Zayn',
    'middle name': 'venom',
    'last_name': 'Xavier',
    'age': 19
}
# The List Type
people = [
    {'name': 'zayn', 'age': 19},
    {'name': 'venom', 'age': 20}
]

print(people[1]['name'])

# Use constructor
# person2 = dict(first_name='Sara', last_name='Williams')

# Get the value
print(person['first_name'])
print(person.get('last_name'))

# Add the value
person['mobile'] = '0000-0000'

# To get the Dictionary keys
print(person.keys())

# To get the Dictionary items
print(person.items())

# To Copy the Dictionary values
person2 = person.copy()
person2['country'] = 'zayn'

# To Remove the item
del(person['age'])
person.pop('mobile')

# To Clear
person.clear()

# Get the length
print(len(person2))
