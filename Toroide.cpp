#include "Toroide.h"
#include "glut.h"

Toroide::Toroide()
{
	setColor(0, 255, 0);//poner el color verde
	radio_interno = 2.5f;
	radio_externo = 5.0f;
	velocidad.x = 4.0f;
	velocidad.y = 4.0f;
}
Toroide::~Toroide()
{
}
void Toroide::dibuja()
{
	color.ponColor();
	glTranslatef(posicion.x, posicion.y, 5.0f);
	glutSolidTorus(radio_interno, radio_externo, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, -5.0f);
}
void Toroide::mueve(float t)
{
	posicion = posicion + velocidad * t;
}
void Toroide::setRadioInterno(float ri)
{
	if (ri<0.1F)
		ri = 0.1F;
	radio_interno = ri;
}
void Toroide::setRadioExterno(float re)
{
	if (re<0.1F)
		re = 0.1F;
	radio_externo = re;
}