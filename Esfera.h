
#pragma once
#include "Vector2D.h"
#include "Objeto.h"
#include "ColorRGB.h"

class Esfera: public Objeto{

protected:
	float radio; // Atributo radio
	friend class Interaccion;
public:
	Esfera();		//Constructor 1 
	Esfera(float rad, float x = 0.0f, float y = 0.0f,
		float vx = 0.0f, float vy = 0.0f);	// Constructor 2
	virtual ~ Esfera();				

	void Dibuja();
	void setRadio(float r); // Establecer radio por el paso de un float
};