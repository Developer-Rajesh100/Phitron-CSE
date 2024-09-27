from django.shortcuts import render
# from ..musician.models import Musician
# from musician.models import Musician
# from ..album.models import Album

# Create your views here.
def home(request):
    data = {
        # 'musician' : Musician,
        # 'album' : Album
    }
    return render(request, 'home.html', data)