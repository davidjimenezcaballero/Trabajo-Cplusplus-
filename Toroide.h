#include "Vector2D.h"
#include "ColorRGB.h"
#include "Objeto.h"

class Toroide :public Objeto
{
	friend class Interaccion;
public:
	Toroide();
	~Toroide();

	void dibuja();
	void setRadioInterno(float ri); // Establecer radio por el paso de un float
	void setRadioExterno(float re); // Establecer radio por el paso de un float

private:
	float radio_interno;// radio en el constructor de 2.5f
	float radio_externo;// radio en el constructor de 5.0f
};