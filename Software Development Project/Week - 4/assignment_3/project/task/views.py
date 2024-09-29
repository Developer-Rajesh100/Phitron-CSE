from django.shortcuts import render, redirect
from .models import TaskModel
from .forms import TaskForm

# Create your views here.
def task(request):
    if request.method == 'POST':
        form = TaskForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
            redirect('home')

    form = TaskForm()
    return render(request, 'task.html', {'form': form})

def edit_task(request, id):
    tsk = TaskModel.objects.get(pk = id)
    tsk_form = TaskForm(instance = tsk)
    if request.method == 'POST':
        tsk_form = TaskForm(request.POST, instance = tsk)
        if tsk_form.is_valid():
            tsk_form.save()
            redirect('home')
    return render(request, 'task.html', {'form': tsk_form})

def delete_task(request, id):
    tsk = TaskModel.objects.get(pk = id)
    tsk.delete()
    return redirect('home')