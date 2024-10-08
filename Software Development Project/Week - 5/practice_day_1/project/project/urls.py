from django.contrib import admin
from django.urls import path, include
from .views import homepage

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', homepage, name = 'homepage'),
    path('auth/', include('authentication.urls')),
    path('profile/', include('user_profile.urls')),
]
