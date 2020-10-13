#include "Cereal.h"

void Cereal::CrearProducto()
{
	Producto::CrearProducto();
	cout << "Sabor del cereal" << endl;
	cin >> sabor;
	cout << "Peso del cereal" << endl;
	cin >> peso;
	cout << "Marca del cereal" << endl;
	cin >> marca;
}

void Cereal::MostrarProducto()
{
	cout << "Cereal de sabor " << sabor << " peso de " << peso<< " gr" << " marca: " << marca << endl;
}
