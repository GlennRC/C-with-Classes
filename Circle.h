#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct Rect {
    struct c_priv * priv;
    int (*m_area)();
} Rect;

Rect * new_rect(int width, int height);

void free_rect(Rect * to_free);

int area(Rect * ths);

int m_area();

#endif
