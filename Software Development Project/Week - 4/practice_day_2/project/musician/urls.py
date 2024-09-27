from django.urls import path
from .views import musician

urlpatterns = [
    path('', musician, name='musician'),
]
