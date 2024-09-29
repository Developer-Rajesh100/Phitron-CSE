from django.shortcuts import render, redirect
from .forms import AlbumForm
from .models import Album

# Create your views here.
def album(request):
    if request.method == 'POST':
        form = AlbumForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
            return redirect('home')
    else:
        form = AlbumForm()
    return render(request, 'album.html', {'form': form})


def edit_album(request, id):
    alb = Album.objects.get(pk = id)
    alb_form = AlbumForm(instance = alb)
    if request.method == 'POST':
        alb_form = AlbumForm(request.POST, instance = alb)
        if alb_form.is_valid():
            alb_form.save()
            return redirect('home')
    return render(request, 'album.html', {'form': alb_form})


def delete_album(request, id):
    alb = Album.objects.get(pk=id)
    alb.delete()
    return redirect('home')
