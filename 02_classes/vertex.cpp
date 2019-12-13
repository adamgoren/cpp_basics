// implementation of Vertex

// get defintions from our header file
#include "vertex.h" 

// notice the additional use of our scope operator ::
void Vertex::setToZero() {
  x = 0;
  y = 0;
  z = 0;
}

void Vertex::set(float a, float b, float c) {
  x = a;
  y = b;
  z = c;
}

float Vertex::getY() {
  return y;
}