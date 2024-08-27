from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    return HttpResponse("This is the home page of Myapp")

def myPage(request):
    return HttpResponse("This is myPage inside myapp!!")