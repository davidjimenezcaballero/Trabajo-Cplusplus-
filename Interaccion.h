#pragma once
#include "Hombre.h"
#include "Caja.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h"

class Interaccion {

public:
	Interaccion();
	virtual ~Interaccion();
	// Paso por referencia para poder modificar las variables
	static bool rebote(Esfera &e, Pared p);
	static void rebote(Esfera &e, Caja c);
	static void rebote(Hombre &h, Caja c);
	static bool rebote(Esfera &e1, Esfera &e2);

	static bool rebote(Bonus &b, Caja c);

	//Funciones para saber si hay colisión
	static bool colision(Esfera e, Hombre h);
	static bool colision(Disparo d, Pared p);
	static bool colision(Disparo d, Caja c);
};