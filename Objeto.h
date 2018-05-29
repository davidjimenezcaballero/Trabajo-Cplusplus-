#include "Vector2D.h"
#include "ColorRGB.h"


class Objeto
{
	// Clase base para todos los objetos del entorno
private:
	ColorRGB color;
protected:
	int num_mov;
	Vector2D posicion;  // Atributo posición
	Vector2D velocidad; // Atributo velocidad

public:
	Objeto();
	~Objeto();
	Vector2D getPos();				// Acceso parte protected
	void setPos(float x, float y);	// Establecer posicion por el paso de dos parámetros float
	void setPos(Vector2D pos);		// Establecer posicion por el paso de un vector
	void setVel(float vx, float vy);// EStablecer velocidad por el paso de dos parámetros float
	void setVel(Vector2D vel);		// Establecer velocidad por el paso de  un vector
	void mueve(float t);			// Gestión del movimiento
	void setColor(Byte r, Byte v, Byte a); //Color del objeto
};

