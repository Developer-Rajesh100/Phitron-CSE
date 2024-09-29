from django.urls import path
from .views import task, edit_task, delete_task

urlpatterns = [
    path('', task, name = 'add_task'),
    path('<int:id>', edit_task, name = 'edit_task'),
    path('<int:id>/delete', delete_task, name = 'delete_task')
]
