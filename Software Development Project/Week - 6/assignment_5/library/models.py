from django.db import models
from django.contrib.auth.models import User


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


########## Borrow Model ##########
class Borrow(models.Model):
    book_id = models.IntegerField()
    username = models.CharField(max_length=50)
    borrowing_on = models.DateTimeField(auto_now_add=True)
    def __str__(self):
        return f"{self.username} | {self.book_id}"


########## Review Model ##########
# class Review(models.Model):
#     review_by = models.CharField(max_length=100)
#     review = models.TextField()
#     review_on = models.DateTimeField(auto_now_add=True)
#     book_id = models.IntegerField(blank=True, null=True)
#     def __str__(self):
#         return f"Book id: {self.book_id} | Reviewed by: {self.review_by}"

# class Review(models.Model):
#     book = models.ForeignKey(Book, on_delete=models.CASCADE, related_name='reviews')
#     user = models.ForeignKey(User, on_delete=models.CASCADE)
#     comment = models.TextField(blank=True)
#     created_at = models.DateTimeField(auto_now_add=True)
#
#     class Meta:
#         # Ensure one review per user per book
#         unique_together = ['book', 'user']
#
#     def __str__(self):
#         return f"{self.created_at}"

class Review(models.Model):
    book = models.ForeignKey('Book', on_delete=models.CASCADE, related_name='reviews')
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    comment = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True)

    class Meta:
        unique_together = ['book', 'user']

    def __str__(self):
        return f"{self.created_at}"