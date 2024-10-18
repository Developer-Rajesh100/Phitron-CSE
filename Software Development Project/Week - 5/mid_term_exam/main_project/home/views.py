from django.contrib import messages
from django.shortcuts import render, redirect
from car.models import Car
from car.models import Order
from django.views.generic import DeleteView
from datetime import datetime


########## Home Page Function Views ##########
def homepage(request):
    car_data = Car.objects.all()
    return render(request, 'homepage.html', {'data': car_data})


########## Car Details Class Views ##########
class CarDetailsView(DeleteView):
    model = Car
    pk_url_kwarg = 'id'
    template_name = 'car_details.html'
    # def get(self, request, *args, **kwargs):
    #     if request.user.is_authenticated:
    #         return super().get(request, *args, **kwargs)
    #     else:
    #         return redirect('login')


########## Buy Now Function Views ##########
# def buyNow(request, id):
#     car = Car.object.all()

def buyNow(request, id):
    car = Car.objects.get(id=id)
    if car.car_quantity > 0:
        car.car_quantity -= 1
        car.save()
        Order.objects.create(car_id=car.id, username=request.user.username, orderd_on = datetime.now())
        messages.success(request, 'Order Placed Successfully!')
    else:
        messages.warning(request, 'This car is currently out of stock.....!')
    return render(request, 'car_details.html', {'car': car})