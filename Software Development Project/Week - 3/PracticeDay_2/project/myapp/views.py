from django.shortcuts import render

# Create your views here.
def content(request):
    return render(request, 'myapp/content.html')