#include "Triangulo.h"

Triangulo::Triangulo() {}
void Triangulo::dibujarTriangulo(float x, float y, float z) {
	glPushMatrix();
	glBegin(GL_TRIANGLES);
	glVertex3f(x, y + 1.0f, z); // V�rtice superior
	glVertex3f(x - 1.0f, y - 1.0f, z); // V�rtice inferior izquierdo
	glVertex3f(x + 1.0f, y - 1.0f, z); // V�rtice inferior derecho
	glEnd();
	glPopMatrix();
};