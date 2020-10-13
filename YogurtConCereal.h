#pragma once
#include "Cereal.h"
#include "Yogurt.h"
class YogurtConCereal:public Cereal,public Yogurt
{
public:
	void CrearProducto();
	void MostrarProducto();
	
};

