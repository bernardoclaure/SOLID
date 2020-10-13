#include "Producto.h"

using namespace std;
void Producto::CrearProducto()
{
	if (codigo == 0)
	{
		cout << "Ingrese el codigo del producto" << endl;
		cin >> this->codigo;
		cout << "Ingrese el precio del producto" << endl;
		cin >> this->precio;
	}
	
}

void Producto::MostrarCodigoYPrecio()
{
	cout << "El codigo del producto es " << codigo << " el precio es " << precio << "Bs" << endl;
}

Producto::Producto()
{
	
}

Producto::~Producto()
{
}
