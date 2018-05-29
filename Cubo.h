#include "Vector2D.h"
#include "ColorRGB.h"
#include "Objeto.h"

class Cubo :public Objeto
{
	friend class Interaccion;
public:
	Cubo();
	~Cubo();

	void dibuja();
	void setLado(float l); // Establecer lado por el paso de un float
	

private:
	float lado;// lado en el constructor de 10.0f
	
};