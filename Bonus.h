
#include "Vector2D.h"
#include "ColorRGB.h"
#include "Objeto.h"

class Bonus :public Objeto
{
	friend class Interaccion;
public:
	void dibuja();
	Bonus();
	virtual ~Bonus();

private:
	float lado;//2.5
	Vector2D aceleracion;//que vaya rapidito para que haya choque seguro

};