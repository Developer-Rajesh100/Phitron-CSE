from django.urls import path
from .views import musician, edit_musician

urlpatterns = [
    path('', musician, name='musician'),
    path('<int:id>', edit_musician, name = 'edit_musician')
]
