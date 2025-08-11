#include "Cube.h"

Cubo::Cubo() {}
void Cubo::dibujarCubo(float x, float y, float z, float r) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glRotatef(r, 0, 0, 1);
        glutSolidCube(0.5);
    glPopMatrix();
}