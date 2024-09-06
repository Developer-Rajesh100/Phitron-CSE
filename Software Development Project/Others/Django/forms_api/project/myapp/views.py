from django.shortcuts import render

# Create your views here.
def home(request):
    return render(request, 'myapp/home.html')

def about(request):
    name = request.POST.get('username')
    email = request.POST.get('email')
    if request.method == 'POST':
        return render(request, 'myapp/about.html', {'name': name, 'email': email})
    else:
        return render(request, 'myapp/about.html')

def register_form(request):

        return render(request, 'myapp/form.html')