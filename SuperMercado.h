#pragma once
#include "Producto.h"
#include "Yogurt.h"
#include "YogurtConCereal.h"
#include "Cereal.h"
#include <list>
class SuperMercado
{
private:
private:
	int numeroProductos=0;
	Producto* productos[20];
public:
	SuperMercado();
	void agregarProducto(Producto* prod);
	void mostrarProductos();
	~SuperMercado(void);

};

