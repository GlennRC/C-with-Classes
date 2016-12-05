#include "Rect.h"

static Rect *this;

//The private portion of the class
struct c_priv {
    int width;
    int height;
};

Rect * new_rect(int width, int height) {
    Rect * working = malloc(sizeof(Rect));
    working->m_area = &m_area;
    working->priv = malloc(sizeof(struct c_priv));
    working->priv->width = width;
    working->priv->height = height;
    this = working;
    return working;
}

void destructor(Rect * to_free) {
    free(to_free->priv);
    free(to_free);
}

int area(Rect * ths) {
    return ths->priv->width * ths->priv->height;
}

int m_area() {
    return this->priv->width * this->priv->height;
}
