class Person:
    def __init__(self, name):
        self.name = name
        self.friends = []

    def add_friend(self, person):
        self.friends.append(person)