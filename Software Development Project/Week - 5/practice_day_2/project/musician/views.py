from django.shortcuts import render, redirect
from .forms import MusicianForm
from .models import Musician

# Create your views here.
def musician(request):
    if request.method == 'POST':
        form = MusicianForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
            return redirect('musician')
    else:
        form = MusicianForm()
    return render(request, 'musician.html', {'form': form})

def edit_musician(request, id):
    mus = Musician.objects.get(pk = id)
    mus_form = MusicianForm(instance = mus)
    if request.method == 'POST':
        mus_form = MusicianForm(request.POST, instance = mus)
        if mus_form.is_valid():
            mus_form.save()
            redirect('home')
    return render(request, 'musician.html', {'form': mus_form})