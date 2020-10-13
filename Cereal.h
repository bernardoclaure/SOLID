#include "Producto.h"
#include <string>
#pragma once
using namespace std;
class Cereal : public virtual Producto
{
private:
	string sabor;
	int peso;
	string marca;
public:
	void CrearProducto();
	void MostrarProducto();


	
};

