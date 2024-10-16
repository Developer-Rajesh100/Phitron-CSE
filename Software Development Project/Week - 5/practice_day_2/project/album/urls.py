from django.urls import path
from .views import album, edit_album, delete_album

urlpatterns = [
    path('', album, name='album'),
    path('<int:id>/edit/', edit_album, name='edit_album'),
    path('<int:id>/delete/', delete_album, name='delete_album'),
]

