from django.shortcuts import render, redirect
from .forms import UserRegistrationForm
from django.contrib.auth import logout, authenticate, login
from django.contrib.auth.models import User
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm

# Create your views here.
def register(request):
    if request.method == 'POST':
        form = UserRegistrationForm(request.POST)
        if form.is_valid():
            # print(form.cleaned_data)
            form.save()
            messages.success(request, 'User Register Successfully!!!')
            return redirect('login')
    else:
        form = UserRegistrationForm()
        return render(request, 'authentication/register.html', {'form': form})

def userLogin(request):
    if request.method == 'POST':
        username = request.POST.get('username')
        password = request.POST.get('password')

        # Error Messages for 'User is not exists'
        if not User.objects.filter(username=username).exists():
            messages.warning(request, 'User is not exists.')
            return redirect('login')

        user = authenticate(username = username, password = password)

        # Error Messages for Incorrect Password
        if user is None:
            messages.warning(request, 'Incorrect Password')
            return redirect('login')
        else:
            login(request, user)
            messages.success(request, 'User Login Successfully!!!')
            return redirect('user_profile')
    return render(request, 'authentication/login.html', {'form': AuthenticationForm})

def userLogout(request):
    logout(request)
    messages.success(request, 'User Logout Successfully!!!')
    return redirect('login')