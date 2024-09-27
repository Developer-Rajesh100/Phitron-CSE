from django.urls import path
from .views import album

urlpatterns = [
    path('', album, name='album'),
]
