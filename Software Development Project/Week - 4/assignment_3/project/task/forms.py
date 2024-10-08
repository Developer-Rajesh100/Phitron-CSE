from django import forms
from .models import TaskModel

class TaskForm(forms.ModelForm):
    class Meta:
        model = TaskModel
        fields = ['title', 'description', 'categories', 'is_completed',]
        widget = {
            'categories': forms.CheckboxSelectMultiple(),
        }