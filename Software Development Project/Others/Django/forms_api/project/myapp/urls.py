from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name='home'),
    path('form/', views.register_form, name='form'),
    path('about/', views.about, name='about'),
]
