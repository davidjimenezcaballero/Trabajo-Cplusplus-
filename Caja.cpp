#include "Caja.h"

Caja::Caja(){		// Constructor Caja

	/*suelo.setLimites(-10.0f, 0, 10.0f, 0);
	pared_dcha.setLimites(10.0f, 0, 10.0f, 15.0f);
	techo.setLimites(10.0f, 15.0f, -10.0f, 15);
	pared_izq.setLimites(-10.0f, 15.0f, -10.0f, 0);
	*/	//Versión 1 de la caja 
	
	//Estableceremos la posición de las paredes
	suelo.setLimites(-10.0f, 0, 10.0f, 0);
	pared_dcha.setLimites(-10.0f, 0, -10.0f, 15.0f);
	techo.setLimites(-10.0f, 15.0f, 10.0f, 15.0f);
	pared_izq.setLimites(10.0f,0, 10.0f, 15.0f);

	// Estableceremos el color de las pareds
	suelo.setColor(0, 100, 0);
	techo.setColor(0,100 , 0);
	pared_dcha.setColor(0, 200, 25);
	pared_izq.setColor(0, 200, 25);
}

Caja::~Caja()		//Destructor de la caja
{
}

void Caja::Dibuja()		//Función dibuja Caja usando la función dibuja pared.
{
	suelo.Dibuja();
	techo.Dibuja();
	pared_izq.Dibuja();
	pared_dcha.Dibuja();
}

