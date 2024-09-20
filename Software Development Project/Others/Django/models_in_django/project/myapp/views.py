from django.shortcuts import render, redirect
from . import models

# Create your views here.
def students(request):
    student = models.Student.objects.all()
    # print(student)
    return render(request, 'myapp/students.html', {'students': student})

def delete_student(request, roll_no):
    student = models.Student.objects.get(pk = roll_no).delete()
    print(student)
    return redirect('/')