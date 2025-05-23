from rest_framework.routers import DefaultRouter
from .views import EventoViewSet

router = DefaultRouter()
router.register(r'eventos', EventoViewSet)  # Ruta: /api/eventos/

urlpatterns = router.urls