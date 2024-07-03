class Student:
    name = 'Rajesh'
    roll = 38
    dep = 'BCA'


print(Student().name)
print(Student().roll)
print(Student().dep)


class Calculator:
    def sum(self, a, b):
        return a + b

    def minus(self, a, b):
        return a - b

    def multiply(self, a, b):
        return a * b

    def divide(self, a, b):
        return a / b

    def remainder(self, a, b):
        return a % b


sum = Calculator().sum(3, 4)
print(sum)
