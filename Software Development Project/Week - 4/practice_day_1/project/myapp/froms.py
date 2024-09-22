from enum import UNIQUE
from random import choices
import datetime

from django import forms
from django.forms.widgets import NumberInput

class PracticeForm(forms.Form):
    id = forms.IntegerField(
        label= 'ID',
        widget= forms.NumberInput(attrs = {'placeholder': 'Enter your ID'})
    )
    name = forms.CharField(
        label= 'Name',
        widget= forms.TextInput(attrs = {'placeholder': 'Enter your name'})
    )
    email = forms.EmailField(
        label= 'Email',
        widget= forms.EmailInput(attrs = {'placeholder': 'Enter your email'})
    )
    date = forms.DateField(
        label = 'Date',
        initial = datetime.date.today,
        widget = NumberInput(attrs = {'type': 'date', 'placeholder': 'YYYY-MM-DD'})
    )
    state = forms.CharField(
        initial= 'Select',
        widget = forms.Select(choices = [('', 'Select'),('West Bengal', 'West Bengal'), ('Karnataka', 'Karnataka'), ('Maharashtra', 'Maharashtra')])
    )
    gender = forms.ChoiceField(
        label = 'Select Gender',
        choices = [('male', 'Male'), ('female', 'Female')],
        widget = forms.RadioSelect,
    )
    comment = forms.CharField(widget = forms.Textarea(attrs={'rows': 4}))
    message = forms.CharField(
    min_length=50,
    error_messages={'min_length': 'You must write at least 50 characters.'},
    widget=forms.Textarea()
)
    agree = forms.BooleanField(required = False)
