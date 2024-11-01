from django.db import models


########## Category Model ##########
class Category(models.Model):
    category = models.CharField(max_length=50)
    def __str__(self):
        return f"{self.category}"


########## Book Model ##########
class Book(models.Model):
    book_img = models.ImageField(upload_to = 'library/media/upload/')
    book_title = models.CharField(max_length=100)
    book_description = models.TextField()
    book_borrowing_price = models.IntegerField(blank=True, null=True)
    book_category = models.ForeignKey(Category, on_delete=models.CASCADE)
    def __str__(self):
        return f"{self.book_title} | {self.book_borrowing_price}"