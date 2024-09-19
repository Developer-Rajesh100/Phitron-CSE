from django.urls import path
from . import views

urlpatterns = [
    path('students/', views.students),
    path('delete/<int:roll_no>', views.delete_student, name='delete_student'),
]
