from django.db import models
from category.models import TaskCategory

# Create your models here.
class TaskModel(models.Model):
    title = models.CharField(max_length=50)
    description = models.TextField()
    is_completed = models.BooleanField(default = False)
    task_assign_date = models.DateField("Date", auto_now_add=True)
    categories = models.ManyToManyField(TaskCategory)

    def __str__(self):
        return f"{self.title} | {self.description} | {self.is_completed} | {self.task_assign_date}"