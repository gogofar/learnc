from django.urls import path

from . import views

app_name = 'polls'
urlpatterns = [
    path('', views.IndexView.as_view(), name='index'),
    path('<int:pk>/detail',views.DetailView.as_view(), name='detail'),
    path('<int:question_id>/results/',views.results, name='results'),
    path('<int:question_id>/vote/',views.vote, name='vote'),
    
]
