#include "SuperMercado.h"

SuperMercado::SuperMercado()
{
}

void SuperMercado::agregarProducto(Producto* prod)
{
	productos[numeroProductos] = prod;
	numeroProductos++;
}

void SuperMercado::mostrarProductos()
{
	cout << "PRODUCTOS DEL SUPERMERCADO" << endl;
		for (int i = 0; i < numeroProductos; i++)
		{
			productos[i]->MostrarProducto();
			productos[i]->MostrarCodigoYPrecio();
			cout << endl;
		}

}
