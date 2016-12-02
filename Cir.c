#include "Cir.h"
#include <math.h>

Cir *this;

//The private portion of the class
struct c_priv {
    int radius;
};

Cir * new_cir(int radius) {
    Cir* working = malloc(sizeof(Cir));
    working->m_area = &m_area;
    working->priv = malloc(sizeof(struct c_priv));
    working->priv->radius = radius;
    this = working;
    return working;
}

void destructor(Cir * to_free) {
    free(to_free->priv);
    free(to_free);
}

int area(Cir * ths) {
    return M_PI * ths->priv->radius * ths->priv->radius;
}

int m_area() {
    return M_PI * this->priv->radius * this->priv->radius;
}
