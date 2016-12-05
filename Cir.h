#ifndef CIR_H
#define CIR_H

typedef struct Cir {
    struct c_priv * priv;
    int (*m_area)();
} Cir;

Cir * new_cir(int radius);

int m_area();


#endif
