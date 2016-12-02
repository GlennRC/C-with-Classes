#ifndef CIR_H
#define CIR_H

typedef struct Cir {
    struct c_priv * priv;
    int (*m_area)();
} Cir;

Cir * new_cir(int radius);

extern "C" {
  void destructor(Cir * to_free);

  int area(Cir * ths);

  int m_area();
}
#endif
