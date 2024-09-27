from django.shortcuts import render, redirect
from .forms import AlbumForm

# Create your views here.
def album(request):
    if request.method == 'POST':
        form = AlbumForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
            return redirect('album')
    else:
        form = AlbumForm()
    return render(request, 'album.html', {'form': form})