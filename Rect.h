#ifndef RECT_H
#define RECT_H

typedef struct Rect {
    struct c_priv * priv;
    int (*m_area)();
} Rect;

Rect * new_rect(int width, int height);


#endif
