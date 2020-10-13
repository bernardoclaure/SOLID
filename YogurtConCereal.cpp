#include "YogurtConCereal.h"

void YogurtConCereal::CrearProducto()
{
	Cereal::CrearProducto();
	Yogurt::CrearProducto();
}

void YogurtConCereal::MostrarProducto()
{
	cout << "El yogurt con cereal tiene " << endl;
	Yogurt::MostrarProducto();
	Cereal::MostrarProducto();
}

