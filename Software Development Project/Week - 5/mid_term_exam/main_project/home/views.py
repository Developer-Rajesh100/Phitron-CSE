from django.shortcuts import render

# Home Page Function Views
def homepage(request):
    return render(request, 'homepage.html')