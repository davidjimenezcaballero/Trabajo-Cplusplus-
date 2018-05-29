#pragma once
#include "Cubo.h"
class CuboMovil :public Cubo
{
public:
	CuboMovil();
	~CuboMovil();

	void mueve(float t);
};

