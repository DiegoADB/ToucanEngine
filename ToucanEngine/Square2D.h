#pragma once
#include "Transform.h"
#include "Color.h"
#include "Vector2.h"
#include "Vector3.h"
class Square2D
{
public:
	Transform myTransform;
	Color myColor;

	//Sobrecargas de constructores
	Square2D();
	//Sobrecargas para modificar la posicion
	void SetPosition(Vector2 _pos);
	void SetPosition(float _x, float _y);
	//Sobrecargas para modificar la escala
	void SetScale(Vector2 _scale);
	void SetScale(float _x, float _y);
	//Sobrecargas para modificar el color
	void SetColor(Vector3 _color);
	void SetColor(float _x, float _y, float _z);
	//Dibuja el Cuadrado con los datos de su Transform(myTransform) y Color(myColor)
	void Draw();
};
