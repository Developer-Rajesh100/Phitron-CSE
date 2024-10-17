from django.db import models


########## Brand Model ##########
class Brand(models.Model):
    brand_name = models.CharField(max_length=50)

    def __str__(self):
        return f"{self.brand_name}"



# Car Model
class Car(models.Model):
    car_img = models.ImageField(upload_to='car/media/')
    car_name = models.CharField(max_length=50)
    car_description = models.TextField()
    car_quantity = models.IntegerField()
    car_price = models.IntegerField()
    brand_name = models.ForeignKey(Brand, on_delete=models.CASCADE)

    def __str__(self):
        return f"Name: {self.car_name} | Quantity: {self.car_quantity} | Price: {self.car_price} | Brand: {self.brand_name}"