from django.db import models

# Create your models here.
class TaskCategory(models.Model):
    category = models.CharField(max_length = 50)

    def __str__(self):
        return f"{self.category}"