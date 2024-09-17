from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name='home'),
    path('about/', views.about, name='about'),
    path('forms/', views.forms, name='forms'),
    path('data/', views.data, name='data'),
    path('django_form/', views.djangoForm, name='django_form'),
]
