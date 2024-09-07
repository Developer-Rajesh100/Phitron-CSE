from django.shortcuts import render
from .forms import contactForm

# Create your views here.
def home(request):
    return render(request, 'myapp/home.html')

def about(request):
    print(request.POST)
    name = request.POST.get('username')
    email = request.POST.get('email')
    select = request.POST.get('select')
    if request.method == 'POST':
        return render(request, 'myapp/about.html', {'name': name, 'email': email, 'select': select})
    else:
        return render(request, 'myapp/about.html')

def register_form(request):
        return render(request, 'myapp/form.html')

def djangoForm(request):
    form = contactForm()
    return render(request, 'myapp/django_form.html', {'form': form})