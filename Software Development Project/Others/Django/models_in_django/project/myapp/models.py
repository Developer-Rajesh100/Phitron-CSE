from django.db import models

# Create your models here.

class Student(models.Model):
    roll_no = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=20)
    department = models.CharField(max_length=20, default='')
    address = models.TextField()

    def __str__(self):
        return f"{self.roll_no} | {self.name} | {self.department} | {self.address}"