from django.urls import path
from .views import HomepageView, BookDetailView


urlpatterns = [
    path('', HomepageView.as_view(), name='homepage'),
    path('book_detail/<int:id>/', BookDetailView.as_view(), name='book_detail'),
]
