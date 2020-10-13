// SuperMercado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Producto.h"
#include "Yogurt.h"
#include "YogurtConCereal.h"
#include "SuperMercado.h"
using namespace std;
int main()
{
    Producto* yogurt = new Yogurt();
    Producto* cereal = new Cereal();
    Producto* yogurtConCereal = new YogurtConCereal();
    yogurt->CrearProducto();
    cereal->CrearProducto();
    yogurtConCereal->CrearProducto();
    SuperMercado* super = new SuperMercado();
    super->agregarProducto(yogurt);
    super->agregarProducto(cereal);
    super->agregarProducto(yogurtConCereal);
    super->mostrarProductos();

}

