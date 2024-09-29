from django.shortcuts import render, redirect
from .forms import CategoryForm

# Create your views here.
def category(request):
    if request.method == 'POST':
        form = CategoryForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
            redirect('home')
    else:
        form = CategoryForm()

    return render(request, 'category.html', {'form': form})