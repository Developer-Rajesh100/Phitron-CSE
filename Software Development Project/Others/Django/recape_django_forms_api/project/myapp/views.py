from django.shortcuts import render
from . forms import contactForm

# Create your views here.
def home(request):
    return render(request, 'myapp/home.html')

def about(request):
    return render(request, 'myapp/about.html')

def forms(request):
    # print(request.POST.get('username'))
    return render(request, 'myapp/forms.html')

def data(request):
    if request.method == 'POST':
        name = request.POST.get('username')
        email = request.POST.get('email')
        rating = request.POST.get('rating')
        return render(request, 'myapp/data.html', {'name': name, 'email': email, 'rating': rating})
    else:
        return render(request, 'myapp/data.html')

def djangoForm(request):
    if request.method == 'POST':
        form = contactForm(request.POST, request.FILES)
        if form.is_valid():
            file = form.cleaned_data['file']
            with open('./myapp/uploads/' + file.name, 'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
    else:
        form = contactForm()
    return render(request, 'myapp/django_form.html', {'form': form})