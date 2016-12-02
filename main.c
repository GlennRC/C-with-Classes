#include <stdio.h>
#include "Rect.h"
#include "Cir.h"

int main() {

    Rect *rect1 = new_rect(2, 5);
    printf("rect1\narea: %d\n", rect1->m_area());

    return 0;
}
