from django.db import models

# Create your models here.
class Students(models.Model):
    roll = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=50)
    dep = models.CharField(max_length=15)
    address = models.CharField(max_length=50)
    def __str__(self):
        return f"{self.roll} | {self.name} | {self.dep} | {self.address}"