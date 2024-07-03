class Raj:
    def __init__(self, name):
        self.name = name

    def display(self):
        print(f"Hello, I am {self.name}!")
        return 'Done!'


raj = Raj("Raj")
print(raj.display())
