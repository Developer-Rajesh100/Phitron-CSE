from django import forms
from authentication.models import UserAccount
from .models import Review

########## Deposit Form ##########
class DepositForm(forms.Form):
    balance = forms.DecimalField(
        widget=forms.NumberInput(attrs={
            'placeholder': 'Please enter the amount',
        })
    )


########## Review Form ##########
# class ReviewForm(forms.ModelForm):
#     class Meta:
#         model = Review
#         fields = ['review']