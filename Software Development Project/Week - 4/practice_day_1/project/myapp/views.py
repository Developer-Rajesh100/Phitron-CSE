from django.shortcuts import render
from .froms import PracticeForm

# Create your views here.
# def home(request):
#     if request.method == "POST":
#         form = PracticeForm(request.POST)
#         if form.is_valid():
#             print(form.cleaned_data)
#     else:
#         form = PracticeForm()
#     return render(request, 'home.html', {'form': form})
def home(request):
    if request.method == "POST":
        form = PracticeForm(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = PracticeForm()
    return render(request, 'home.html', {'form': form})