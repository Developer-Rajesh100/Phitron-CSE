class Shop():
    def __init__(self, name):
        self.name = name
        self.products = []

    def __repr__(self):
        return f"This shop is : {self.name}"

    def add_product(self, name, brand, quantity, price):
        product = Product(name, brand, quantity, price)
        self.products.append(product)

    def buy_product(self, item_name, buy_quantity):
        for item in self.products:
            if item.name == item_name:
                if item.quantity > 0 and item.quantity >= buy_quantity:
                    item.quantity -= buy_quantity
                    print('Placed order Successfully!')


class Product():
    def __init__(self, name, brand, quantity, price):
        self.name = name
        self.brand = brand
        self.quantity = quantity
        self.price = price

    def __repr__(self):
        return f'Name: {self.name}, Brand: {self.brand}, Quantity: {self.quantity}, Price: {self.price}'


GNX = Shop('GNX')
GNX.add_product('pendrive', 'Sandisk', 7, 450)
GNX.add_product('GPU', 'Asus', 9, 45000)
print(GNX.products)

loknath = Shop('Loknath')
loknath.add_product('SSD', 'Xyz', 5, 4500)
loknath.add_product('CPU', 'Intel', 6, 60000)
print(loknath.products)

GNX.buy_product('GPU', 3)
print(GNX.products)
