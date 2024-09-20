from django.shortcuts import render
from . import form

# Create your views here.
def home(request):
    std = form.StudentForm(request.POST or None, request.FILES or None)
    if std.is_valid():
        std.save()
    return render(request, 'home.html', {'form': std})