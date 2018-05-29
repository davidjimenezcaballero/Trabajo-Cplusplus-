#include "Cubo.h"
#include "glut.h"

Cubo::Cubo()
{
	setColor(0, 0, 0);//poner el color blanco
	lado = 10.0f;
	velocidad.x = 0.0f;
	velocidad.y = 0.0f;
}
Cubo::~Cubo()
{
}
void Cubo::dibuja()
{
	color.ponColor();
	glTranslatef(posicion.x, posicion.y, 5.0f);
	glutSolidCube(lado);
	glTranslatef(-posicion.x, -posicion.y, -5.0f);
}
void Cubo::setLado(float l)
{
	if (l<0.1F)
		l = 0.1F;
	lado = l;
}
