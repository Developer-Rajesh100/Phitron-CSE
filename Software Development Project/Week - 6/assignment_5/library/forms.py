from django import forms
from authentication.models import UserAccount

class DepositForm(forms.ModelForm):
    class Meta:
        model = UserAccount
        fields = ['balance']