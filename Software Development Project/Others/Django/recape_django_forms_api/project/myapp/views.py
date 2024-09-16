from django.shortcuts import render

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
        return render(request, 'myapp/data.html', {'name': name, 'email': email})
    else:
        return render(request, 'myapp/data.html')