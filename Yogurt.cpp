#include "Yogurt.h"

void Yogurt::CrearProducto()
{
	Producto::CrearProducto();
	cout << "Sabor del yogurt" << endl;
	cin >> sabor;
	cout << "Volumen del yogurt" << endl;
	cin >> volumen;
	cout << "Marca del yogurt" << endl;
	cin >> marca;
}

void Yogurt::MostrarProducto()
{
	cout << "Yogurt de sabor " << sabor << " volumen de " << volumen << " ml" <<" marca: "<<marca<< endl;
}
