#include "Triangulo.h"

Triangulo::Triangulo() {}
void Triangulo::dibujarTriangulo(float x, float y, float z) {
	glPushMatrix();
	glBegin(GL_TRIANGLES);
	glVertex3f(x, y + 1.0f, z); // Vértice superior
	glVertex3f(x - 1.0f, y - 1.0f, z); // Vértice inferior izquierdo
	glVertex3f(x + 1.0f, y - 1.0f, z); // Vértice inferior derecho
	glEnd();
	glPopMatrix();
};