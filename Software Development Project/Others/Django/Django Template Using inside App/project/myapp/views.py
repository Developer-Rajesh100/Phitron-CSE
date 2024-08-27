from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def myAppHome(request):
    return render(request, 'myapp/myAppHome.html')