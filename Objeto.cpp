#include "Objeto.h"



Objeto::Objeto()
{
}
Objeto::~Objeto()
{
}
Vector2D Objeto::getPos()
{
	return posicion;
}
void Objeto::setPos(float x, float y)
{
	posicion.x = x;
	posicion.y = y;
}
void Objeto::setPos(Vector2D pos)
{
	posicion = pos;
}
void Objeto::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
void Objeto::setVel(Vector2D vel)
{
	velocidad = vel;
}
void Objeto::mueve(float t)	// Ecuaciones MRUA
{
	posicion = posicion + velocidad * t;

}
void Objeto::setColor(Byte r, Byte v, Byte a)
{
	//Metodo privado de color 
	color.set(r, v, a);
}