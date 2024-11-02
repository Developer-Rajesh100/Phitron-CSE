from django import forms
from authentication.models import UserAccount

class DepositForm(forms.Form):
    balance = forms.DecimalField(
        widget=forms.NumberInput(attrs={
            'placeholder': 'Please enter the amount',
        })
    )