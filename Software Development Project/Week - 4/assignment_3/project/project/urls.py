from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('home.urls')),
    path('add_task/', include('task.urls')),
    path('add_category/', include('category.urls'))
]
