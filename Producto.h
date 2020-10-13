#pragma once
#include <iostream>
class Producto
{
	private:
		int codigo=0;
		int precio;
	public:
		virtual void CrearProducto ();
		virtual void MostrarProducto()=0;
		void MostrarCodigoYPrecio();
		Producto();
		~Producto();


};

