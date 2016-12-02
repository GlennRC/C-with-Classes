#ifndef RECT_H
#define RECT_H

typedef struct Rect {
    struct c_priv * priv;
    int (*m_area)();
} Rect;

Rect * new_rect(int width, int height);

void destructor(Rect * to_free);

int area(Rect * ths);

int m_area();

#endif
