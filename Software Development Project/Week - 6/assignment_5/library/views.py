from django.shortcuts import render
from django.views import View
from .models import Book

# Create your views here.
# def homepage(request):
#     return render(request, 'library/homepage.html')

class homepage(View):
    def get(self, request):
        context = {'data': Book.objects.all()}
        return render(request, 'library/homepage.html', context)