from .views import register, userLogin, userLogout
from django.urls import path

urlpatterns = [
    path('register/', register, name = 'register_page'),
    path('login/', userLogin, name = 'login'),
    path('logout/', userLogout, name = 'logout')
]