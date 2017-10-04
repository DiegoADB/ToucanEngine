#include "Triangle2D.h"
#include "SDL_opengl.h"

//Sobrecarga de funciones para modificar posicion
void Triangle2D::SetPosition(Vector2 _pos)
{
	myTransform.position.x = _pos.x;
	myTransform.position.y = _pos.y;
	myTransform.position.z = 0;
}
void Triangle2D::SetPosition(float _x, float _y)
{
	myTransform.position.x = _x;
	myTransform.position.y = _y;
	myTransform.position.z = 0;
}

//Sobrecarga de funciones para modificar escala
void Triangle2D::SetScale(Vector2 _scale)
{
	myTransform.scale.x = _scale.x;
	myTransform.scale.y = _scale.y;
}
void Triangle2D::SetScale(float _x, float _y)
{
	myTransform.scale.x = _x;
	myTransform.scale.y = _y;
}

//Sobrecarga de funciones para modificar color
void Triangle2D::SetColor(Vector3 _color)
{
	myColor.r = _color.x;
	myColor.g = _color.y;
	myColor.b = _color.z;
}
void Triangle2D::SetColor(float _x, float _y, float _z)
{
	myColor.r = _x;
	myColor.g = _y;
	myColor.b = _z;
}

//Constructor Basico
Triangle2D::Triangle2D()
{
	myTransform.position.x = 0;
	myTransform.position.y = 0;
	myTransform.position.z = 0;
	myTransform.scale.x = 1;
	myTransform.scale.y = 1;
	myTransform.scale.z = 0;
}

//Funcion que modifica los vertices del triangulo
void Triangle2D::SetTrianglePoints(float _a, float _b, float _c)
{
	pointA = _a;
	pointB = _b;
	pointC = _c;
}

//Funcion que imprime cuadrado con los datos de su Transform y Color
void Triangle2D::Draw()
{
	glPushMatrix();
	glColor4f(myColor.r, myColor.g, myColor.b, myColor.a);
	glBegin(GL_TRIANGLES);
	glVertex2f(-(pointA * myTransform.scale.x) + myTransform.position.x, -(0.1f * myTransform.scale.y) + myTransform.position.y);
	glVertex2f((pointB * myTransform.scale.x) + myTransform.position.x, -(0.1f * myTransform.scale.y) + myTransform.position.y);
	glVertex2f((pointC * myTransform.scale.x) + myTransform.position.x, (0.1f * myTransform.scale.y) + myTransform.position.y);
	glEnd();
	glPopMatrix();
}