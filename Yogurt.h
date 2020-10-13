#pragma once
#include "Producto.h"
#include <string>
using namespace std;
class Yogurt:public virtual Producto
{
private:
	string sabor;
	int volumen;
	string marca;
public:
	void CrearProducto();
	void MostrarProducto();


};

