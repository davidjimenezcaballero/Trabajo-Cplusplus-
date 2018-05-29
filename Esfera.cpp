#include "Esfera.h"
#include <stdlib.h>
#include "glut.h"

Esfera::Esfera()
{
	
	setColor(0,255,0);//poner el color verde
	radio = 5.0f; // radio de la esfera
	setVel(4.0f, 4.0f); // velocidad estándar de los objetos
}
Esfera::Esfera(float rad, float x, float y, float vx, float vy)
{
	radio = rad;
	setPos(x, y);
	setVel(vx, vy);

}
Esfera::~Esfera()
{
}
void Esfera::Dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}
void Esfera::setRadio(float r)
{
	if (r<0.1F)
		r = 0.1F;
	radio = r;
}
