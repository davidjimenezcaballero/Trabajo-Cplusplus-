#include "CuboMovil.h"

CuboMovil::CuboMovil()
{
}
CuboMovil::~CuboMovil()
{
}
void CuboMovil::mueve(float t)
{
	posicion = posicion + velocidad * t;
}