from django.shortcuts import render
from django.views.generic import DetailView
from django.views import View
from .models import Book

# Create your views here.
# def homepage(request):
#     return render(request, 'library/homepage.html')

class HomepageView(View):
    def get(self, request):
        context = {'data': Book.objects.all()}
        return render(request, 'library/homepage.html', context)


class BookDetailView(DetailView):
    model = Book
    pk_url_kwarg = 'id'
    template_name = 'library/book_detail.html'