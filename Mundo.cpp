#include "Mundo.h"
#include "glut.h"
#include "Interaccion.h"
#include <cmath>

Mundo::~Mundo()
{
	//esferas.destruirContenido();
	//disparos.destruirContenido();
}

void Mundo::RotarOjo()
{
	float dist = sqrt(x_ojo*x_ojo + z_ojo * z_ojo);
	float ang = atan2(z_ojo, x_ojo);
	ang += 0.05f;
	x_ojo = dist * cos(ang);
	z_ojo = dist * sin(ang);
}

void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,
				0.0, -15.0, 0.0, 
				0.0, 0.0f, 1.0f);

	casilla1.dibuja();
	casilla2.dibuja();
	casilla3.dibuja();

	tablero.dibuja();

	bonus.dibuja();

	cubo.dibuja();
}

void Mundo::Mueve()
{
	//bonus.mueve(0.5);
	cubo.mueve(0.25);
}

void Mundo::Inicializa()
{

	//setVista(0, 7.5, 180);
	//setVista(0, -75.0, 180);
	//setVista(-10, -170, 100);
	setVista(-10, -90, 95);

	casilla1.setPos(-45, -45);
	casilla1.setTipo(1);

	casilla2.setPos(5, -45);
	casilla2.setTipo(2);

	casilla3.setPos(5, 15);
	casilla3.setTipo(3);

	tablero.setTamanio(10,10);

	bonus.setPos(5.0, -45.0f);

	cubo.setPos(5.0, -25.0);
	cubo.setLado(10.0f);
}

void Mundo::setVista(float x, float y, float z)
{
	x_ojo = x;
	y_ojo = y;
	z_ojo = z;
}

void Mundo::Tecla(unsigned char key)
{
	switch (key)
	{
	case ' ':
	{
		break;
	}
	case '1':
		break;
	case '2':
		break;
	case '3':
		break;
	case '4':
		break;
	}
}

void Mundo::teclaEspecial(unsigned char key)
{
	switch (key) {
	case GLUT_KEY_LEFT:

		break;
	case GLUT_KEY_RIGHT:
		break;
	}
}

