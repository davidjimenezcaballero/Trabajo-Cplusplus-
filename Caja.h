#pragma once
#include "Pared.h"

class Caja{
private:
	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;
public:
	Caja();				// Constructor
	virtual ~Caja();	// Destructor

	void Dibuja();		// Función dibuja Caja

	friend class Interaccion;	// Clase amiga de Interacción
								// Da acceso a su parte privada
};