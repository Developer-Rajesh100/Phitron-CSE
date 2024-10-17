from django.shortcuts import render
from car.models import Car

# Home Page Function Views
def homepage(request):
    car_data = Car.objects.all()
    return render(request, 'homepage.html', {'data': car_data})