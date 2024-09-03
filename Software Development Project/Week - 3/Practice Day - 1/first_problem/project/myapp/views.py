from django.shortcuts import render
import datetime

# Create your views here.
def myapp(request):
    data = {
        'num': 15,
        'name': 'Rajesh',
        'string': ['Hello', 'everyone,', 'I', 'am', 'Rajesh', 'Mondal', 'from', 'Habra.,' 'I', 'am', 'a', 'junior', 'software', 'developer.'],
        'time': datetime.datetime.now(),
        'title': 'mondal',
        'intro': 'Hello there, I am Rajesh',
    }
    return render(request, 'myapp/myapp.html', data)