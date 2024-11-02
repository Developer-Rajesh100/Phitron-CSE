from django.urls import path
from .views import HomepageView, BookDetailView, UserProfileView


urlpatterns = [
    path('', HomepageView.as_view(), name='homepage'),
    path('user_profile/', UserProfileView.as_view(), name='user_profile'),
    path('book_detail/<int:id>/', BookDetailView.as_view(), name='book_detail'),
]
