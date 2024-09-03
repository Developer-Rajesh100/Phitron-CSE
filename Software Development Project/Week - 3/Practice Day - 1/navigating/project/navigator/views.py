from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def navigator(request):
    return render(request, 'navigator/navigator.html')

def about(request):
    return render(request, 'navigator/about.html')

def contact(request):
    return render(request, 'navigator/contact.html')