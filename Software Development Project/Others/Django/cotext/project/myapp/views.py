from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def myapp(request):
    num = {'num': 10}
    students = {
        'arr' : [
            {'id': 1, 'name': 'Rajesh', 'dep': 'BCA'},
            {'id': 2, 'name': 'Rakib', 'dep': 'BCA'},
            {'id': 3, 'name': 'Rudra', 'dep': 'BBA'},
            {'id': 4, 'name': 'Ahir', 'dep': 'Optrometry'},
            {'id': 5, 'name': 'Biplob', 'dep': 'BHM'},
        ]
    }

    return render(request, 'myapp/myapp.html', students)