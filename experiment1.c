#include <unistd.h>
#include <stdio.h>
#include "rect.h"

int main() {
    Rect *rect1 = new_rect(3, 2);
    printf("rect1\n");
    printf("area: %d\n", area(rect1));
    printf("m_area: %d\n", rect1->m_area());

    Rect *rect2 = new_rect(2, 2);
    printf("\nrect2\n");
    printf("area: %d\n", area(rect2));
    printf("m_area: %d\n", rect2->m_area());

    return 0;    
}
