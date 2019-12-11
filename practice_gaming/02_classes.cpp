#include <stdio.h>

class Vertex {
  private:
    float x,  y, z;

  public:
    void setToZero() {
      x = 0;
      y = 0;
      z = 0;
    }

    void set(float a, float b, float c) {
      x = a;
      y = b;
      z = c;
    }

    float getY() {
      return y;
    }
};

int main() {

  Vertex v;
  
  v.setToZero();
  printf("%g\n", v.getY());

  v.set(1, 2, 3);
  printf("%g\n", v.getY());

  return 0;
}