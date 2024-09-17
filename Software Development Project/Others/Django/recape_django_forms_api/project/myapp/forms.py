from django import forms

class contactForm(forms.Form):
    name = forms.CharField(label='Enter your name', max_length=30)
    # email = forms.EmailField(label='Enter your email')
    # age = forms.IntegerField(label='Enter your age')
    # balance = forms.IntegerField(label='Enter your bank balance')
    # birthday = forms.DateField(label='Enter your birthday')
    # appointment = forms.CharField(label='Enter your appointment')
    # gender = forms.ChoiceField(label='Enter your gender', choices=(('M', 'Male'), ('F', 'Female')))
    file = forms.FileField(label='Choose a file')